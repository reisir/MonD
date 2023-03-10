[SearchModule]
Meter=Image
Y=R

[MeasureSearchInput]
Measure=Plugin
Plugin=InputText
W=([#W] - [#SearchPadding] * 2)
H=[#SearchInputHeight]
Y=(([#SearchHeight] / 2) - ([SearchPlaceholder:H] / 2) + 2 + [SearchModule:Y])
X=([#SearchPadding] / 1.5)
Command1=[!SetVariable Search "$UserInput$"][!WriteKeyValue Variables Search "[MeasureSearchInput]" "#ROOTFILE#"]
Command2=[!UpdateMeasure MonD][!CommandMeasure MonD "export 0"]
SolidColor=[#SearchBackgroundColor]
DefaultValue=[#__SearchPlaceholder]
DynamicVariables=1
FontFace=[#FontFace]
FontColor=FFFFFF
FontWeight=700
FontSize=16

[SearchContainer]
Meter=Shape
Shape=Rectangle 0, 0, [#W], [#SearchHeight], 0 | Extend Modifiers
Modifiers=StrokeWidth 0 | Fill Color [#SearchBackgroundColor]
Y=r

[bg1]
MouseOverAction=[!SetOption SearchPlaceholder Text [#__SearchPlaceholder]][!UpdateMeter SearchPlaceholder][!Redraw]
MouseLeaveAction=[!SetOption SearchPlaceholder Text ""][!UpdateMeter SearchPlaceholder][!Redraw]
[bg0]
MouseOverAction=[!SetOption SearchPlaceholder Text [#__SearchPlaceholder]][!SetOption SearchPlaceholder InlinePattern .*][!UpdateMeter SearchPlaceholder][!Redraw]
MouseLeaveAction=[!SetOption SearchPlaceholder Text ""][!SetOption SearchPlaceholder InlinePattern ^$][!UpdateMeter SearchPlaceholder][!Redraw]

[SearchBackground]
Meter=Shape
MeterStyle=SearchContainer | bg[#Searching]
Container=SearchContainer
LeftMouseUpAction=[!CommandMeasure MeasureSearchInput "ExecuteBatch ALL"]
ToolTipText=[#__Search]

[Search]
Container=SearchContainer

[SearchIcon]
Meter=String
Text=[#fa-magnifying-glass]
MeterStyle=Text | Search | fa
StringAlign=CenterCenter
Y=([#SearchHeight] / 2)
X=([#W] - #SearchPadding#)
FontSize=13

[Searching0]
Text=[#__SearchTitle]
InlinePattern=^$
InlineSetting=Underline
[Searching1]
Text=[#Search]
InlinePattern=.*
InlineSetting=Underline

[SearchPlaceholder]
Meter=String
MeterStyle=Text | Search | Placeholder | Searching[#Searching]
FontWeight=700
FontSize=16
Y=(([#SearchHeight] / 2) - 1)
X=([#SearchPadding] / 1.5)
StringAlign=LeftCenter

[SearchAnchor]
Meter=Image
Container=SearchContainer
Y=[#SearchHeight]
