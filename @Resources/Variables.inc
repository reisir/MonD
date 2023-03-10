[Variables]
; Skin
W=(400 * [#S])
H=(55 * [#S])
FontColor=FFFFFF
ItemsOnPage=8
FontFace=Fira Sans

; TODO:
; Fill page with empty meters if there's not enough results?
FillPage=1

; Search
SearchHeight=(50 * [#S])
SearchPadding=(25 * [#S])
SearchBackgroundColor=333333
SearchInputHeight=(28 * [#S])
SearchFontColor=[#FontColor]
SearchBackground=333333

; Notice
NoticeFontColor=252525
NoticeBackground=cf954b
NoticePadding=(10 * [#S])
NoticeHeight=(28 * [#S])

; Skins
ItemBackground=252525
AvailableColor=[#FontColor]
InstalledColor=00BC87
UpdateableColor=E2972D

; Navigation
NavigationHeight=(48 * [#S])
NavigationFontColor=[#FontColor]
NavigationBackground=333333
NavigationTextOffset=(-3 * [#S])
NavigationArrowPadding=(14 * [#S])

; Icons
IconColor=FFFFFFAA
IconHoverColor=FFFFFFFF
ItemIconPadding=(25 * [#S])
NavigationIconPadding=(25 * [#S])

; FontAwesome
fa-magnifying-glass=[\xf002]
fa-github=[\xf09b]
fa-file-arrow-down=[\xf56d]
fa-download=[\xf019]
fa-trash=[\xf1f8]
fa-circle-arrow-up=[\xf0aa]
fa-arrow-right=[\xf061]
fa-arrow-left=[\xf060]

; Language
; __prev __next __curr __last from #@#Generated\SkinVariables
__PreviousPage="Previous page: [#__prev]"
__NextPage="Next page: [#__next]"
__CurrentPage="Current page: [#__curr]"
__ShowInstalled="Show installed skins"
__ShowAll="Show all skins"
__ViewGitHub="View on GitHub"
__Install="Install"
__Uninstall="Uninstall"
__Upgrade="Upgrade"
__Search="Search skins"
__SearchPlaceholder="Search!"
__SearchTitle="Meters on Demand"
__Total="Total skins"

[fa]
AntiAlias=1
FontFace=FontAwesome

[Text]
AntiAlias=1
FontFace=[#FontFace]
FontSize=(18 * [#S])
FontColor=[#FontColor]
