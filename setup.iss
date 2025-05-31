[Setup]
AppName=Tauras-Petrauskas
AppVersion=1.0
DefaultDirName={pf}\VU\Tauras-Petrauskas
DefaultGroupName=VU\Tauras-Petrauskas
OutputDir=.
OutputBaseFilename=Setup
PrivilegesRequired=admin
AllowNoIcons=no

[Files]
Source: "main.exe"; DestDir: "{app}"; Flags: ignoreversion

[Icons]
Name: "{group}\Tauras-Petrauskas"; Filename: "{app}\main.exe"
Name: "{commondesktop}\Tauras-Petrauskas"; Filename: "{app}\main.exe"

[Run]
Filename: "{app}\main.exe"; Description: "Paleisti programa"; Flags: nowait postinstall runascurrentuser