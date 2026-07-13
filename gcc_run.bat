@echo off
cd /d C:\Users\shreeshrajtripathi\Documents\C Course
set OUTPUT=gcc_run_log.txt
echo PATH=%PATH%>"%OUTPUT%"
where gcc.exe>>"%OUTPUT%" 2>&1
where cc1.exe>>"%OUTPUT%" 2>&1
gcc --version>>"%OUTPUT%" 2>&1
gcc -v 01_first.c -o 01_first.exe>>"%OUTPUT%" 2>&1
echo EXIT=%ERRORLEVEL%>>"%OUTPUT%"
dir /b >>"%OUTPUT%" 2>&1
