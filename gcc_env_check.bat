@echo off
set LOG=%~dp0gcc_env_check.txt
echo LOGGING TO %LOG% > "%LOG%"
echo DATE %DATE% TIME %TIME% >> "%LOG%"
echo PATH=%PATH% >> "%LOG%"
where gcc.exe >> "%LOG%" 2>&1
where cc1.exe >> "%LOG%" 2>&1
if exist "C:\msys64\ucrt64\bin\gcc.exe" echo found MSYS2 gcc >> "%LOG%"
if exist "C:\msys64\ucrt64\lib\gcc\x86_64-w64-mingw32\16.1.0\cc1.exe" echo found cc1 >> "%LOG%"
for %%F in (libgcc_s_seh-1.dll libgmp-10.dll libisl-23.dll libmpc-3.dll libmpfr-6.dll libwinpthread-1.dll zlib1.dll libzstd.dll) do (
  echo checking %%F >> "%LOG%"
  where /r "C:\msys64" %%F >> "%LOG%" 2>&1
)
where /r "C:\Windows" api-ms-win-crt-runtime-l1-1-0.dll >> "%LOG%" 2>&1
where /r "C:\Windows" api-ms-win-crt-stdio-l1-1-0.dll >> "%LOG%" 2>&1
where /r "C:\Windows" api-ms-win-crt-string-l1-1-0.dll >> "%LOG%" 2>&1
where /r "C:\Windows" api-ms-win-crt-math-l1-1-0.dll >> "%LOG%" 2>&1
where /r "C:\Windows" ucrtbase.dll >> "%LOG%" 2>&1
cmd /c "gcc --version >> "%LOG%" 2>&1"
cmd /c "gcc -v 01_first.c -o 01_first.exe >> "%LOG%" 2>&1"
echo EXIT=%ERRORLEVEL% >> "%LOG%"
if exist 01_first.exe echo EXE_CREATED >> "%LOG%"
dir /b >> "%LOG%" 2>&1
