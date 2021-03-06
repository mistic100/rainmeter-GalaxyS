; ----------------------------------
; TIME DISPLAY
; ----------------------------------

[MeterClock]
Meter=String
MeasureName=MeasureTime
MeterStyle=MainTextStyle
StringAlign=CenterTop
FontSize=50
X=(#Column2# + #ColumnCW# / 2)
Y=(#Padding# * 2)

[MeterDate]
Meter=String
MeasureName=MeasureDate
MeterStyle=MainTextStyle
StringAlign=CenterTop
FontSize=17
InlineSetting=Weight | 700
X=0r
Y=#Spacing#R


; ----------------------------------
; WEATHER DISPLAY
; ----------------------------------

[MeterWeatherImage]
Meter=Image
MeasureName=MeasureWeatherIcon
DynamicVariables=1
ImageName=#@#Images\Weather\%1.png
X=(#Column2# + (#ColumnCW# - #WeatherBigWidth#) / 2)
Y=130
W=#WeatherBigWidth#

[MeterWeatherTemp]
Meter=String
MeasureName=MeasureWeatherTemp
Text="%1°C"
MeterStyle=TitleTextStyle
StringAlign=CenterCenter
FontSize=50
InlineSetting=Shadow | 0 | 0 | 3 | 255,255,255
X=(#WeatherBigWidth# / 2)r
Y=(#WeatherBigWidth# / 2)r

[MeterWeatherDesc]
Meter=String
MeasureName=MeasureWeatherDesc
MeterStyle=MainTextStyle
StringAlign=CenterCenter
FontSize=17
InlineSetting=Weight | 700
X=-#Spacing#r
Y=0R

; ----------------------------------
; FORECAST DISPLAY
; ----------------------------------

[ForecastDayStyle]
StringAlign=Right
X=(#Column2# + (#ColumnCW# - #WeatherSmallWidth#) / 2 - #Padding#)
Y=#WeatherPadding#R

[ForecastIconStyle]
DynamicVariables=1
ImageName=#@#Images\Weather\%1.png
X=#Padding#r
Y=-#Spacing#r
W=#WeatherSmallWidth#
H=#WeatherSmallWidth#

[ForecastTempStyle]
Text="%1°C"
X=#Padding#R
Y=#Spacing#r

[MeterForecastDay1]
Meter=String
MeasureName=MeasureForecastDayName1
MeterStyle=MainTextStyle | ForecastDayStyle

[MeterForecastIcon1]
Meter=Image
MeasureName=MeasureForecastIcon1
MeterStyle=ForecastIconStyle

[MeterForecastTemp1]
Meter=String
MeasureName=MeasureForecastTemp1
MeterStyle=MainTextStyle | ForecastTempStyle

[MeterForecastDay2]
Meter=String
MeasureName=MeasureForecastDayName2
MeterStyle=MainTextStyle | ForecastDayStyle

[MeterForecastIcon2]
Meter=Image
MeasureName=MeasureForecastIcon2
MeterStyle=ForecastIconStyle

[MeterForecastTemp2]
Meter=String
MeasureName=MeasureForecastTemp2
MeterStyle=MainTextStyle | ForecastTempStyle

[MeterForecastDay3]
Meter=String
MeasureName=MeasureForecastDayName3
MeterStyle=MainTextStyle | ForecastDayStyle

[MeterForecastIcon3]
Meter=Image
MeasureName=MeasureForecastIcon3
MeterStyle=ForecastIconStyle

[MeterForecastTemp3]
Meter=String
MeasureName=MeasureForecastTemp3
MeterStyle=MainTextStyle | ForecastTempStyle

; ----------------------------------
; VOLUME DISPLAY
; ----------------------------------

[VolumeBackground]
Meter=Image
ImageName=#@#Images\Skin\volume_bg.png
X=#Column2#
Y=(#Line5#-#Padding#*2)

[VolumeImageValue]
Measure=Calc
UpdateDivider=1
Formula=25 + Ceil(MeasureVolume / 100 * 225 / 11) * 11
MinValue=0
MaxValue=250

[VolumeCurrent]
Meter=Bar
MeasureName=VolumeImageValue
UpdateDivider=1
BarImage=#@#Images\Skin\volume_on.png
MeterStyle=HorizontalBarDimension
X=0r
Y=0r

[VolumeValue]
Meter=String
MeasureName=MeasureVolumeValue
UpdateDivider=1
DynamicVariables=1
Text="%1"
MeterStyle=MainTextStyle
X=15r
Y=0r
