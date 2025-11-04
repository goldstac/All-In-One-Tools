@echo off
REM Compile all .c and .cpp files in the current folder into main.exe

REM Check if there are any C or C++ files
if not exist *.c if not exist *.cpp (
    echo No C or C++ files found in the current directory.
    pause
    exit /b
)

REM Compile all C and C++ files with g++
g++ *.c *.cpp -o main.exe

IF %ERRORLEVEL% EQU 0 (
    echo Compilation successful! main.exe created.
) ELSE (
    echo Compilation failed.
)

pause
