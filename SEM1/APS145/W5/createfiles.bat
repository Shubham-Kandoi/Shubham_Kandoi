@echo off
setlocal enabledelayedexpansion

for /l %%i in (1,1,10) do (
    set "filename=activity%%i.txt"
    echo John Doe > %%filename%
    set "foldername=week%%i"
    mkdir %%foldername%
    copy %%filename% %%foldername%
)