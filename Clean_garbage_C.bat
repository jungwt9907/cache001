::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
::
::  _MyClean.bat
::  My Project Clean
::  Version: 1.0
::
::
::  MyClean is free software: you can redistribute it and/or modify it under the terms 
::  of the MJP General Public License as published by MyeongJeong, Park.
::
::  MyClean is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
::  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
::  PURPOSE. 
::
::  Copyright 2014 MyeongJeong,Park. All rights reserved.
::
::
::  This notice may not be removed from this file.
::
::  1. Tested
::     - Visual C++ 6.0 project
::     - Visual C++ 2010 project
::     - Visual C++ 2013 project
::
::  2. History
::       2014-11-04  Initial version
::
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
pause
rmdir "%~dp0\Debug Notebook Test"
rmdir "%~dp0\Debug"
rmdir "%~dp0\Release"

mkdir "%~dp0\x64"
rmdir "%~dp0\x64\Debug Notebook Test"
rmdir "%~dp0\x64\Debug"
rmdir "%~dp0\x64\Release"
rmdir "%~dp0\x64\"

del *.recipe *.FileListAbsolute.txt /s /f
del *.obj *.sbr *.bsc /s /f
del *.*pch *.res *.map *.exp *.idb *.pdb /s /f
del *.aps *.ncb *.opt *.plg *.clw /s /f
del *.tlh *.tli /s /f
del *.scc /s /f
del *.ilk *.exe *.pdb /s /f
del *.suo /s /f /a
del *.user *.APS /s /f
del BuildLog.htm /s /f
del *.bak *.tmp RCa*. /s /f
del Thumbs.db /s /f /a
del null /s /f /a
del lsprst7.* /s /f /a
del sysprs7.* /s /f /a
del tmpPrst.* /s /f /a
del *.vssscc *.vsscc *.vspscc vssver2.scc /s /f /a
del *.*sdf *.*log *.lastbuildstate *.cache /s /f /a
del *.unsuccessfulbuild /s /f /a
del *.db /s /f /a
for /f "delims=" %%d in ('dir /s /b /ad ^| sort /r') do rd "%%d"

pause