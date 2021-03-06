; ----------------------------------
; TOP CPU DISPLAY
; ----------------------------------

[TopCPUValueStyle]
Text="%1 %"
Scale=100.0
FontColor=#LightGrey#
FontSize=14
StringAlign=Right
X=(#Column3# + 55)
Y=0R

[TopCPUNameStyle]
FontSize=14
ClipString=1
W=(#ColumnW# - 55)
X=#Spacing#r
Y=0r

[TopCPUTitle]
Meter=String
Text="TOP CPU"
MeterStyle=TitleTextStyle
StringAlign=Right
X=(#Width# - #Padding#)
Y=#Line1#

[TopCPUBackground]
Meter=Image
MeterStyle=GraphDimension | GraphBackgroundStyle
W=#ColumnW#
X=#Column3#
Y=#Spacing#R

[TopCPUValue1]
Meter=String
MeasureName=MeasureTopCPUValue1
MeterStyle=MainTextStyle | TopCPUValueStyle
Y=3r

[TopCPUName1]
Meter=String
MeasureName=MeasureTopCPUName1
MeterStyle=MainTextStyle | TopCPUNameStyle

[TopCPUValue2]
Meter=String
MeasureName=MeasureTopCPUValue2
MeterStyle=MainTextStyle | TopCPUValueStyle

[TopCPUName2]
Meter=String
MeasureName=MeasureTopCPUName2
MeterStyle=MainTextStyle | TopCPUNameStyle

[TopCPUValue3]
Meter=String
MeasureName=MeasureTopCPUValue3
MeterStyle=MainTextStyle | TopCPUValueStyle

[TopCPUName3]
Meter=String
MeasureName=MeasureTopCPUName3
MeterStyle=MainTextStyle | TopCPUNameStyle


; ----------------------------------
; TOP RAM DISPLAY
; ----------------------------------

[TopRAMValueStyle]
AutoScale=1
Text="%1B"
FontColor=#LightGrey#
FontSize=14
StringAlign=Right
X=(#Column3# + 90)
Y=0R

[TopRAMNameStyle]
FontSize=14
ClipString=1
W=(#ColumnW# - 90)
X=#Spacing#r
Y=0r

[TopRAMTitle]
Meter=String
Text="TOP RAM"
MeterStyle=TitleTextStyle
StringAlign=Right
X=(#Width# - #Padding#)
Y=#Line2#

[TopRAMBackground]
Meter=Image
MeterStyle=GraphDimension | GraphBackgroundStyle
W=#ColumnW#
X=#Column3#
Y=#Spacing#R

[TopMemValue1]
Meter=String
MeasureName=MeasureTopMemValue1
MeterStyle=MainTextStyle | TopRAMValueStyle
Y=3r

[TopMemName1]
Meter=String
MeasureName=MeasureTopMemName1
MeterStyle=MainTextStyle | TopRAMNameStyle

[TopMemValue2]
Meter=String
MeasureName=MeasureTopMemValue2
MeterStyle=MainTextStyle | TopRAMValueStyle

[TopMemName2]
Meter=String
MeasureName=MeasureTopMemName2
MeterStyle=MainTextStyle | TopRAMNameStyle

[TopMemValue3]
Meter=String
MeasureName=MeasureTopMemValue3
MeterStyle=MainTextStyle | TopRAMValueStyle

[TopMemName3]
Meter=String
MeasureName=MeasureTopMemName3
MeterStyle=MainTextStyle | TopRAMNameStyle


; ----------------------------------
; HDD DISPLAY
; ----------------------------------

[DriveBarStyle]
BarColor=#HDDBarColor#
X=0r
Y=0r

[DriveGraphStyle]
LineColor=#HDDLineColor#
X=0r
Y=0r

[DriveBytesStyle]
Text="%1B/s"
Autoscale=1
X=#Spacing#R
Y=0r

[DriveSpaceStyle]
Text="%1B"
Autoscale=1
StringAlign=Right
X=(#Width# - #Padding#)
Y=0r

[DriveTitle]
Meter=String
Text="HDD"
MeterStyle=TitleTextStyle
StringAlign=Right
X=(#Width# - #Padding#)
Y=#Line3#

; drive 1
[Drive1BarBackground]
Meter=Image
MeterStyle=HorizontalBarDimension | HorizontalBarBackgroundStyle
X=#Column3#
Y=#Spacing#R

[MeterDrive1Bar]
Meter=Bar
MeasureName=MeasureDrive1Usage
MeterStyle=HorizontalBarDimension | DriveBarStyle

[MeterDrive1Graph]
Meter=Line
MeasureName=MeasureDrive1Access
MeterStyle=HorizontalBarDimension | DriveGraphStyle

[Drive1Label]
Meter=String
Text=#Drive1#
MeterStyle=MainTextStyle
X=#Spacing#r
Y=#Spacing#r

[MeterDrive1Bytes]
Meter=String
MeasureName=MeasureDrive1Bytes
MeterStyle=MainTextStyle | DriveBytesStyle

[MeterDrive1Value]
Meter=String
MeasureName=MeasureDrive1Free
MeterStyle=MainTextStyle | DriveSpaceStyle

; drive 2
[Drive2BarBackground]
Meter=Image
MeterStyle=HorizontalBarDimension | HorizontalBarBackgroundStyle
X=#Column3#
Y=#Padding#R

[MeterDrive2Bar]
Meter=Bar
MeasureName=MeasureDrive2Usage
MeterStyle=HorizontalBarDimension | DriveBarStyle

[MeterDrive2Graph]
Meter=Line
MeasureName=MeasureDrive2Access
MeterStyle=HorizontalBarDimension | DriveGraphStyle

[Drive2Label]
Meter=String
Text=#Drive2#
MeterStyle=MainTextStyle
X=#Spacing#r
Y=#Spacing#r

[MeterDrive2Bytes]
Meter=String
MeasureName=MeasureDrive2Bytes
MeterStyle=MainTextStyle | DriveBytesStyle

[MeterDrive2Value]
Meter=String
MeasureName=MeasureDrive2Free
MeterStyle=MainTextStyle | DriveSpaceStyle

; drive 3
[Drive3BarBackground]
Meter=Image
MeterStyle=HorizontalBarDimension | HorizontalBarBackgroundStyle
X=#Column3#
Y=#Padding#R

[MeterDrive3Bar]
Meter=Bar
MeasureName=MeasureDrive3Usage
MeterStyle=HorizontalBarDimension | DriveBarStyle

[MeterDrive3Graph]
Meter=Line
MeasureName=MeasureDrive3Access
MeterStyle=HorizontalBarDimension | DriveGraphStyle

[Drive3Label]
Meter=String
Text=#Drive3#
MeterStyle=MainTextStyle
X=#Spacing#r
Y=#Spacing#r

[MeterDrive3Bytes]
Meter=String
MeasureName=MeasureDrive3Bytes
MeterStyle=MainTextStyle | DriveBytesStyle

[MeterDrive3Value]
Meter=String
MeasureName=MeasureDrive3Free
MeterStyle=MainTextStyle | DriveSpaceStyle

; drive 4
[Drive4BarBackground]
Meter=Image
MeterStyle=HorizontalBarDimension | HorizontalBarBackgroundStyle
X=#Column3#
Y=#Padding#R

[MeterDrive4Bar]
Meter=Bar
MeasureName=MeasureDrive4Usage
MeterStyle=HorizontalBarDimension | DriveBarStyle

[MeterDrive4Graph]
Meter=Line
MeasureName=MeasureDrive4Access
MeterStyle=HorizontalBarDimension | DriveGraphStyle

[Drive4Label]
Meter=String
Text=#Drive4#
MeterStyle=MainTextStyle
X=#Spacing#r
Y=#Spacing#r

[MeterDrive4Bytes]
Meter=String
MeasureName=MeasureDrive4Bytes
MeterStyle=MainTextStyle | DriveBytesStyle

[MeterDrive4Value]
Meter=String
MeasureName=MeasureDrive4Free
MeterStyle=MainTextStyle | DriveSpaceStyle

; drive 5
[Drive5BarBackground]
Meter=Image
MeterStyle=HorizontalBarDimension | HorizontalBarBackgroundStyle
X=#Column3#
Y=#Padding#R

[MeterDrive5Bar]
Meter=Bar
MeasureName=MeasureDrive5Usage
MeterStyle=HorizontalBarDimension | DriveBarStyle

[MeterDrive5Graph]
Meter=Line
MeasureName=MeasureDrive5Access
MeterStyle=HorizontalBarDimension | DriveGraphStyle

[Drive5Label]
Meter=String
Text=#Drive5#
MeterStyle=MainTextStyle
X=#Spacing#r
Y=#Spacing#r

[MeterDrive5Bytes]
Meter=String
MeasureName=MeasureDrive5Bytes
MeterStyle=MainTextStyle | DriveBytesStyle

[MeterDrive5Value]
Meter=String
MeasureName=MeasureDrive5Free
MeterStyle=MainTextStyle | DriveSpaceStyle
