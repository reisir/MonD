[Skins]
DynamicVariables=1

[Containers]
DynamicVariables=1
Shape=Rectangle 0, 0, [#W], [#H] | Extend Defaults
Defaults=StrokeWidth 0 | Fill Color 255, 255, 255
X=0
Y=0R

[Backgrounds]
; Mouse action detection
UpdateDivider=1
Shape=Rectangle 0, 0, [#W], [#H] | Extend Defaults, Overrides
Defaults=StrokeWidth 0 | Fill Color 37,37,37,255
W=[#W]
H=[#H]
X=0
Y=0

[Names]
X=(10 * [#S])
Y=0

[Versions]
FontSize=8
X=(5 * [#S])R
Y=(15 * [#S])

[FullNames]
FontSize=(8 * [#S])
X=(10 * [#S])
Y=(30 * [#S])

[Hovers]
Hidden=1

[HoverBackgrounds]
Overrides=Fill LinearGradient FillGradient
FillGradient=0 | 37,37,37,255 ; 0.0 | 37,37,37,255 ; 0.5 | 37,37,37,0 ; 1.0

[Icons]
Y=([#H] / 2)
X=(#ItemIconPadding# * -1.5)r
StringAlign=CenterCenter
FontSize=18
FontColor=[#IconColor]
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor [#IconHoverColor]][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor [#IconColor]][!UpdateMeter #CURRENTSECTION#][!Redraw]

[IconAnchors]
X=[#W]

[Actions]

[Installs]
Text=[#fa-download]
ToolTipText=[#__Install]

[Uninstalls]
Text=[#fa-trash]
ToolTipText=[#__Uninstall]

[Upgrades]
Text=[#fa-circle-arrow-up]
ToolTipText=[#__Upgrade]

[Githubs]
Text=[#fa-github]
ToolTipText=[#__ViewGitHub]

; Colors

[Available]
FontColor=[#AvailableColor]

[Installed]
FontColor=[#InstalledColor]

[Updateable]
FontColor=[#UpdateableColor]
