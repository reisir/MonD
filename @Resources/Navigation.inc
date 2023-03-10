[Variables]
NavigationArrowsWidth=([#W] - ([#ItemIconPadding] * 4) + ([NavigationInstalled:W] * 2))

[NavigationModule]
Meter=Image
Y=R

[NavigationContainer]
Meter=Shape
Shape=Rectangle 0, 0, [#W], [#NavigationHeight] | Extend Defaults, Overrides
Defaults=StrokeWidth 0 | Fill Color FFFFFF
Y=R

[Navigation]
FontColor=[#NavigationFontColor]
Container=NavigationContainer

[NavigationBackground]
Meter=Shape
MeterStyle=NavigationContainer | Navigation
Overrides=Fill Color [#NavigationBackground]
Y=0

[ViewInstalled0]
ToolTipText=[#__ShowInstalled]
[ViewInstalled1]
FontColor=[#InstalledColor]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor [#InstalledColor]][!UpdateMeter #CURRENTSECTION#][!Redraw]
ToolTipText=[#__ShowAll]

[NavigationInstalled]
Meter=String
MeterStyle=Navigation | Icons | Installs | fa | ViewInstalled[#ViewInstalled]
Y=([#NavigationHeight] / 2)
X=[#ItemIconPadding]
DynamicVariables=1
LeftMouseUpAction=[#ResetSearch][#ToggleInstalled][!UpdateMeasure MonD][!CommandMeasure MonD "export 0"]

[NavigationPrevious]
Meter=String
MeterStyle=Navigation | Icons | fa
X=(([#NavigationArrowsWidth] / 3) - [#NavigationArrowPadding])r
Y=r
Text=[#fa-arrow-left]
DynamicVariables=1
ToolTipText=[#__PreviousPage]
LeftMouseUpAction=[!CommandMeasure MonD "export [#PreviousPage]"]

[NavigationNext]
Meter=String
MeterStyle=Navigation | Icons | fa
X=(([#NavigationArrowsWidth] / 3) + ([#NavigationArrowPadding] * 2))r
Y=r
Text=[#fa-arrow-right]
DynamicVariables=1
ToolTipText=[#__NextPage]
LeftMouseUpAction=[!CommandMeasure MonD "export [#NextPage]"]

[NavigationTotal]
Meter=String
Text=97
MeterStyle=Navigation | Text | Icons
StringAlign=CenterCenter
X=([#W] - [#ItemIconPadding])
Y=[#NavigationTextOffset]r
FontWeight=700
DynamicVariables=1
ToolTipText=[#__Total]

[NavigationCurrentPage]
Meter=String
Text=#__curr# / #__last#
MeterStyle=Navigation | Text | Icons
StringAlign=CenterCenter
X=([#W] / 2)
Y=r
FontWeight=700
DynamicVariables=1
ToolTipText=[#__CurrentPage]
LeftMouseUpAction=[#ResetSearch][#DisableViewInstalled][!UpdateMeasure MonD][!CommandMeasure MonD "export 0"]

[NavigationAnchor]
Meter=Image
Y=([NavigationModule:Y] + [#NavigationHeight])
DynamicVariables=1
