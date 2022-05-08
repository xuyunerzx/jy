Dim strKeys,arrKeys
strKeys = "A,B,C,D,E,F,G,"_
& "H,I,J,K,L,M,N,O,P,Q,"_
& "R,S,T,U,V,W,X,Y,Z,"_
& "1,2,3,4,5,6,7,8,9,0,"_
& "Tab,Up,Down,Left,Right,"_
& "F1,F2,F3,F4,F5,F6,F7,"_
& "F8,F9,F10,F11,F12"
arrKeys = Split(strKeys,",",-1,1)
Dim WshShell
Set WshShell = CreateObject("wscript.Shell")
Dim fso
Set fso = CreateObject("scripting.filesystemobject")
Dim desktop
desktop = WshShell.SpecialFolders("Desktop")
Dim bound,link,path
bound = UBound(arrKeys)

