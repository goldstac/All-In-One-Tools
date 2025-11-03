@echo off
REM Compile all .c files in the current folder into my_program.exe

REM Find all .c files
set SOURCES=
for %%f in (*.c) do set SOURCES=!SOURCES! %%f

REM Compile with gcc
gcc *.c -o main.exe

IF %ERRORLEVEL% EQU 0 (
   
) ELSE (
    echo Compilation failed.
)

pause
