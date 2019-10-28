@echo off
title Special Security for Windows

set usb=0
for %%f in (A: B: C: D: E: F: G: H: I: J: K: L: M: N: O: P: Q: R: S: T: U: V: W: X: Y: Z:) do (
	if exist %%f\%username%.ssw set usb=%%f
)
echo %usb% > usb.txt

cls
exit