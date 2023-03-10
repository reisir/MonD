[NoticeModule]
Meter=Image
Y=R

[NoticeContainer]
Meter=Image
SolidColor=FFFFFF
Y=r
W=[#W]
H=[#NoticeHeight]
Hidden=([#UpdatesAvailable] = 0 ? 1 : 0)
DynamicVariables=1

[Notice]
Group=Notice
Container=NoticeContainer

[NoticeBackground]
Meter=Image
MeterStyle=NoticeContainer | Notice
DynamicVariables=1
SolidColor=[#NoticeBackground]
LeftMouseUpAction=[#ResetSearch][#EnableViewInstalled][!UpdateMeasure MonD][!CommandMeasure MonD "export 0"]

[MeasureNoticeText]
Measure=String
String=#UpdatesAvailable# Updates available!
Substitute="1 Updates":"1 Update"
Group=Notice
OnUpdateAction=!UpdateMeterGroup Notice
DynamicVariables=1

[NoticeText]
Meter=String
MeasureName=MeasureNoticeText
MeterStyle=Text | Notice
FontColor=[#NoticeFontColor]
DynamicVariables=1
FontWeight=700
FontSize=(12 * [#S])
StringAlign=LeftCenter
InlineSetting=Underline
Y=([#NoticeHeight] / 2)
X=([#NoticePadding])

[NoticeAnchor]
Meter=Image
Y=(([NoticeModule:Y]) + [#NoticeHeight])
DynamicVariables=1
Group=Notice
