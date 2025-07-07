# Compila o programa C++
g++ test.cpp -O2 -o exe

# Cria o arquivo de saída
$outputFile = "test.txt"
if (Test-Path $outputFile) {
    Remove-Item $outputFile
}
New-Item -ItemType File -Path $outputFile | Out-Null

# Limites para o problema
$minN = 1
$maxN = 200000
$minK = 1
$maxK = 1000000000
$minA = -1000000000
$maxA = 1000000000

# Marca o início do tempo total
$totalTimer = [System.Diagnostics.Stopwatch]::StartNew()

# 1. Varre N (K fixo, A fixo)
$K = $minK
$Avalor = $minA
foreach ($N in @($minN, [math]::Floor($maxN/2), $maxN)) {
    $A = @()
    for ($i=0; $i -lt $N; $i++) { $A += $Avalor }
    $inputFile = "temp_input.txt"
    "$N $K" | Out-File $inputFile -Encoding ASCII
    ($A -join ' ') | Out-File $inputFile -Encoding ASCII -Append

    $timer = [System.Diagnostics.Stopwatch]::StartNew()
    $result = Get-Content $inputFile | .\exe
    $timer.Stop()
    $elapsed = $timer.Elapsed.TotalSeconds

    "VarN | N: $N K: $K A: $Avalor | Tempo: {0:N3} s" -f $elapsed | Out-File $outputFile -Append -Encoding ASCII
    Remove-Item $inputFile
}

# 2. Varre K (N fixo, A fixo)
$N = $maxN
$Avalor = $minA
foreach ($K in @($minK, [math]::Floor($maxK/2), $maxK)) {
    $A = @()
    for ($i=0; $i -lt $N; $i++) { $A += $Avalor }
    $inputFile = "temp_input.txt"
    "$N $K" | Out-File $inputFile -Encoding ASCII
    ($A -join ' ') | Out-File $inputFile -Encoding ASCII -Append

    $timer = [System.Diagnostics.Stopwatch]::StartNew()
    $result = Get-Content $inputFile | .\exe
    $timer.Stop()
    $elapsed = $timer.Elapsed.TotalSeconds

    "VarK | N: $N K: $K A: $Avalor | Tempo: {0:N3} s" -f $elapsed | Out-File $outputFile -Append -Encoding ASCII
    Remove-Item $inputFile
}

# 3. Varre A (N fixo, K fixo)
$N = $maxN
$K = $minK
foreach ($Avalor in @($minA, 0, $maxA)) {
    $A = @()
    for ($i=0; $i -lt $N; $i++) { $A += $Avalor }
    $inputFile = "temp_input.txt"
    "$N $K" | Out-File $inputFile -Encoding ASCII
    ($A -join ' ') | Out-File $inputFile -Encoding ASCII -Append

    $timer = [System.Diagnostics.Stopwatch]::StartNew()
    $result = Get-Content $inputFile | .\exe
    $timer.Stop()
    $elapsed = $timer.Elapsed.TotalSeconds

    "VarA | N: $N K: $K A: $Avalor | Tempo: {0:N3} s" -f $elapsed | Out-File $outputFile -Append -Encoding ASCII
    Remove-Item $inputFile
}

$totalTimer.Stop()
$totalElapsed = $totalTimer.Elapsed.TotalSeconds
Write-Host "Testes concluídos. Resultados salvos em $outputFile"
Write-Host "Tempo total: $totalElapsed s"