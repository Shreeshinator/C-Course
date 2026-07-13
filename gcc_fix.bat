@echo off
setlocal
set "PATH=C:\msys64\ucrt64\bin;%PATH%"
gcc %*
endlocal
