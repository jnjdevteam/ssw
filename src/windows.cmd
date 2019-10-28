@echo off
title Special Security for Windows

echo %username%
net user %username% *
color 17
echo 암호를 성공적으로 변경하였습니다!
pause
color 07

cls
exit