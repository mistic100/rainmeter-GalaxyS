; ----------------------------------
; CPU DISPLAY
; ----------------------------------

[CPUTitle]
Meter=String
Text="CPU"
MeterStyle=TitleTextStyle
X=#Column1#
Y=#Line1#

[MeterCPUClock]
Meter=String
MeasureName=MeasureCPUClock
Text="%1 MHz"
MeterStyle=MainTextStyle
X=#Spacing#R
Y=-#TextTitleOffset#r

[MeterCPUTemp]
Meter=String
MeasureName=MeasureCPUTemp
Text="%1°C"
MeterStyle=MainTextStyle
StringAlign=Right
X=(#Column2# - #Padding#)
Y=0r

; graph
[CPUGraphBackground]
Meter=Image
MeterStyle=GraphBackgroundStyle
X=#Column1#
Y=#Spacing#R

[MeterCPULines]
Meter=Line
LineCount=#NbCPU#
MeasureName=MeasureCPU1Usage
MeasureName2=MeasureCPU2Usage
MeasureName3=MeasureCPU3Usage
MeasureName4=MeasureCPU4Usage
MeasureName5=MeasureCPU5Usage
MeasureName6=MeasureCPU6Usage
MeasureName7=MeasureCPU7Usage
MeasureName8=MeasureCPU8Usage
MeterStyle=GraphDimension
LineColor=#CPU1LineColor#
LineColor2=#CPU2LineColor#
LineColor3=#CPU3LineColor#
LineColor4=#CPU4LineColor#
LineColor5=#CPU5LineColor#
LineColor6=#CPU6LineColor#
LineColor7=#CPU7LineColor#
LineColor8=#CPU8LineColor#
W=(#ColumnW# - (#CPUBarWidth# + #CPUBarMargin#) * #NbCPU#)
X=0r
Y=0r
Hidden=(#MultipleCPULines# < 1)

[MeterCPUGraph]
Meter=Histogram
LineCount=1
MeasureName=MeasureCPUUsage
MeterStyle=GraphDimension
PrimaryColor=#CPUGraphColor#
W=(#ColumnW# - (#CPUBarWidth# + #CPUBarMargin#) * #NbCPU#)
X=0r
Y=0r
Hidden=(#MultipleCPULines# > 0)

[MeterCPULine]
Meter=Line
LineCount=1
MeasureName=MeasureCPUUsage
MeterStyle=GraphDimension
LineColor=#CPULineColor#
W=(#ColumnW# - (#CPUBarWidth# + #CPUBarMargin#) * #NbCPU#)
X=0r
Y=0r
Hidden=(#MultipleCPULines# > 0)

; bars
[MeterCPU1Bar]
Meter=Bar
MeasureName=MeasureCPU1Usage
MeterStyle=BarDimension
BarColor=#CPU1BarColor#
X=(#ColumnW# - (#CPUBarWidth# + #CPUBarMargin#) * #NbCPU# + #CPUBarMargin#)r
Y=0r
DynamicVariables=1

[MeterCPU2Bar]
Meter=Bar
MeasureName=MeasureCPU2Usage
MeterStyle=BarDimension
BarColor=#CPU2BarColor#
X=#CPUBarMargin#R
Y=0r
DynamicVariables=1
Hidden=(#NbCPU# < 2)

[MeterCPU3Bar]
Meter=Bar
MeasureName=MeasureCPU3Usage
MeterStyle=BarDimension
BarColor=#CPU3BarColor#
X=#CPUBarMargin#R
Y=0r
DynamicVariables=1
Hidden=(#NbCPU# < 3)

[MeterCPU4Bar]
Meter=Bar
MeasureName=MeasureCPU4Usage
MeterStyle=BarDimension
BarColor=#CPU4BarColor#
X=#CPUBarMargin#R
Y=0r
DynamicVariables=1
Hidden=(#NbCPU# < 4)

[MeterCPU5Bar]
Meter=Bar
MeasureName=MeasureCPU5Usage
MeterStyle=BarDimension
BarColor=#CPU5BarColor#
X=#CPUBarMargin#R
Y=0r
DynamicVariables=1
Hidden=(#NbCPU# < 5)

[MeterCPU6Bar]
Meter=Bar
MeasureName=MeasureCPU6Usage
MeterStyle=BarDimension
BarColor=#CPU6BarColor#
X=#CPUBarMargin#R
Y=0r
DynamicVariables=1
Hidden=(#NbCPU# < 6)

[MeterCPU7Bar]
Meter=Bar
MeasureName=MeasureCPU7Usage
MeterStyle=BarDimension
BarColor=#CPU7BarColor#
X=#CPUBarMargin#R
Y=0r
DynamicVariables=1
Hidden=(#NbCPU# < 7)

[MeterCPU8Bar]
Meter=Bar
MeasureName=MeasureCPU8Usage
MeterStyle=BarDimension
BarColor=#CPU8BarColor#
X=#CPUBarMargin#R
Y=0r
DynamicVariables=1
Hidden=(#NbCPU# < 8)


; ----------------------------------
; RAM DISPLAY
; ----------------------------------

[RAMTitle]
Meter=String
Text="RAM"
MeterStyle=TitleTextStyle
X=#Column1#
Y=#Line2#

[MeterRAMUsage]
Meter=String
MeasureName=MeasureRAMUsage
MeasureName2=MeasureRAMTotal
Autoscale=1
Text="%1 / %2 GB"
MeterStyle=MainTextStyle
X=#Spacing#R
Y=-#TextTitleOffset#r

; graph
[RAMGraphBackground]
Meter=Image
MeterStyle=GraphBackgroundStyle
X=#Column1#
Y=#Spacing#R

[MeterRAMGraph]
Meter=Histogram
MeasureName=MeasureRAMUsage
MeterStyle=GraphDimension
PrimaryColor=#RAMGraphColor#
X=0r
Y=0r

[MeterRAMLine]
Meter=Line
MeasureName=MeasureRAMUsage
MeterStyle=GraphDimension
LineColor=#RAMLineColor#
X=0r
Y=0r


; ----------------------------------
; GPU DISPLAY
; ----------------------------------

[GPUTitle]
Meter=String
Text="GPU"
MeterStyle=TitleTextStyle
X=#Column1#
Y=#Line3#

[MeterGPUClock]
Meter=String
MeasureName=MeasureGPUClock
Text="%1 MHz"
MeterStyle=MainTextStyle
X=#Spacing#R
Y=-#TextTitleOffset#r

[MeterGPUTemp]
Meter=String
MeasureName=MeasureGPUTemp
Text="%1°C"
MeterStyle=MainTextStyle
StringAlign=Right
X=(#Column2# - #Padding#)
Y=0r

; graph
[GPUGraphBackground]
Meter=Image
MeterStyle=GraphBackgroundStyle
X=#Column1#
Y=#Spacing#R

[MeterGPUGraph]
Meter=Histogram
MeasureName=MeasureGPUUsage
MeterStyle=GraphDimension
PrimaryColor=#GPUGraphColor#
X=0r
Y=0r

[MeterGPULine]
Meter=Line
LineCount=2
MeasureName=MeasureGPURAMUsage
MeasureName2=MeasureGPUUsage
MeterStyle=GraphDimension
LineColor=#GPURAMLineColor#
LineColor2=#GPULineColor#
X=0r
Y=0r

; ----------------------------------
; NETWORK DISPLAY
; ----------------------------------

[NetworkTitle]
Meter=String
Text="NET"
MeterStyle=TitleTextStyle
X=#Column1#
Y=#Line4#

[MeterNetworkIP]
Meter=String
MeasureName=MeasureIP
Text="%1"
MeterStyle=MainTextStyle
X=#Spacing#R
Y=-#TextTitleOffset#r

[MeterNetworkPing]
Meter=String
MeasureName=MeasurePing
Text="%1 ms"
MeterStyle=MainTextStyle
StringAlign=Right
X=(#Column2# - #Padding#)
Y=0r

; download
[DownloadBarBackground]
Meter=Image
MeterStyle=HorizontalBarBackgroundStyle
X=#Column1#
Y=#Spacing#R

[MeterDownloadBar]
Meter=Bar
MeasureName=MeasureDownload
MeterStyle=HorizontalBarDimension
BarColor=#DownloadBarColor#
X=0r
Y=0r

[MeterDownloadGraph]
Meter=Line
MeasureName=MeasureDownload
MeterStyle=HorizontalBarDimension
LineColor=#DownloadLineColor#
X=0r
Y=0r

[DownloadIcon]
Meter=Image
ImageName=#@#Images\Icons\download.png
X=0r
Y=0r

[MeterDownloadValue]
Meter=String
MeasureName=MeasureDownload
Text="%1B/s"
Autoscale=1
MeterStyle=MainTextStyle
X=#Spacing#R
Y=#Spacing#r

; upload
[UploadBarBackground]
Meter=Image
MeterStyle=HorizontalBarBackgroundStyle
X=#Column1#
Y=(#Spacing# * 2)R

[MeterUploadBar]
Meter=Bar
MeasureName=MeasureUpload
MeterStyle=HorizontalBarDimension
BarColor=#UploadBarColor#
X=0r
Y=0r

[MeterUploadGraph]
Meter=Line
MeasureName=MeasureUpload
MeterStyle=HorizontalBarDimension
LineColor=#UploadLineColor#
X=0r
Y=0r

[UploadIcon]
Meter=Image
ImageName=#@#Images\Icons\upload.png
X=0r
Y=0r

[MeterUploadValue]
Meter=String
MeasureName=MeasureUpload
Text="%1B/s"
Autoscale=1
MeterStyle=MainTextStyle
X=#Spacing#R
Y=#Spacing#r


; ----------------------------------
; UPTIME DISPLAY
; ----------------------------------

[UptimeTitle]
Meter=String
Text="UPTIME"
MeterStyle=TitleTextStyle
X=#Column1#
Y=#Line5#

[MeterUptime]
Meter=String
MeasureName=MeasureUptime
MeterStyle=MainTextStyle
StringAlign=Right
X=(#Column2# - #Padding#)
Y=-#TextTitleOffset#r