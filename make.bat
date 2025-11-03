@echo off
REM Compile all .c files in the current folder into my_program.exe

REM Find all .c files
set SOURCES=
for %%f in (*.c) do set SOURCES=!SOURCES! %%f

REM Compile with gcc
gcc *.c -o my_program.exe

IF %ERRORLEVEL% EQU 0 (
    echo Compilation successful! Output: my_program.exe
) ELSE (
    echo Compilation failed.
)

pause
