@echo off
cd /d "%~dp0"
where py >nul 2>nul
if %errorlevel% equ 0 (
  py -3 ios\tools\serve_site.py
) else (
  python ios\tools\serve_site.py
)
pause
