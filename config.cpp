class CfgPatches
{
	class A3_Data_l6AA
	{
		author="Smith";
		name="l6AA Menu";
		url="";
		requiredAddons[]=
		{
			"a3_ui_f",
			"a3_ui_f_enoch",
			"a3_ui_f_orange",
			"a3_ui_f_oldman",
			"A3_Ui_F_AoW"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class RscActivePicture;
class RscActivePictureKeepAspect;
class RscPicture;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscButton;
class RscButtonMenu;
class RscStandardDisplay;
class RscPictureKeepAspect;
class Background;
class RscText;
class RscStructuredText;
class RscHTML;
class RscTitle;
class RscButtonMenuOK;
class RscVideo;


class RscMainMenuSpotlight: RscControlsGroupNoScrollbars
{
	fade=1;
	x="0.5 - (1.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) - 	(2 * pixelW)";
	y="0.95 - (	10 / 2) * 	(pixelH * pixelGridNoUIScale * 2)";
	w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
	h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
	class Controls
	{
		class GroupPicture: RscControlsGroupNoScrollbars
		{
			x=0;
			y=0;
			w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
			h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
			class Controls
			{
				class Picture: RscPictureKeepAspect
				{
					idc=1023;
					text="#(argb,8,8,3)color(1,0,1,1)";
					x=0;
					y=0;
					w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
					h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
				};
				class Video: RscVideo
				{
					idc=1024;
					show=0;
					x=0;
					y=0;
					w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
					h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
				};
			};
		};
		class GroupHover: RscControlsGroupNoScrollbars
		{
			idc=1025;
			fade=1;
			x=0;
			y=0;
			w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
			h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
			class Controls
			{
				class Overlay: RscPicture
				{
					text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\hover_ca.paa";
					colorText[]={0,0,0,0.5};
					x=0;
					y=0;
					w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
					h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
				};
				class LineLeft: RscText
				{
					colorBackground[]={1,1,1,1};
					x=0;
					y=0;
					w="pixelW";
					h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
				};
				class LineRight: LineLeft
				{
					x="10 * 	(pixelW * pixelGridNoUIScale * 2) - pixelW";
				};
				class LineTop: LineLeft
				{
					idc=1027;
					x=0;
					y=0;
					w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
					h="(pixelH * pixelGrid * 2)";
					colorText[]={0,0,0,1};
					shadow=0;
					style=0;
					sizeEx="(pixelH * pixelGrid * 2)";
					font="PuristaLight";
					onLoad="(_this select 0) ctrlsettext toupper ctrltext (_this select 0);";
				};
				class LineBottom: LineTop
				{
					y="10 * 	(pixelH * pixelGridNoUIScale * 2) - pixelH";
					h="pixelH";
				};
			};
		};
		class TextBackground: RscPicture
		{
			idc=1029;
			text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_backgroundText_ca.paa";
			colorText[]={0,0,0,0.5};
			x=0;
			y=0;
			w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
			h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
		};
		class Text: RscStructuredText
		{
			idc=1028;
			size="1.00 * 	(pixelH * pixelGridNoUIScale * 2)";
			shadow=2;
			x=0;
			y=0;
			w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
			h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
			class Attributes
			{
				align="center";
				color="#ffffff";
				font="PuristaBold";
			};
		};
		class Button: RscButton
		{
			idc=1026;
			colorBackground[]={0,0,0,0};
			colorBackgroundActive[]={0,0,0,0};
			colorBackgroundDisabled[]={0,0,0,0};
			colorFocused[]={0,0,0,0};
			colorDisabled[]={0,0,0,0};
			x=0;
			y=0;
			w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
			h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
		};
	};
};
class RscDisplayMain: RscStandardDisplay
{
	class controlsBackground
	{
		class l6AA_Background: RscPicture
		{
			text="l6AA_branding\logo\l6AA_BG2.jpg";
			loops = 999999999;
			x = safeZoneX;
			y = safeZoneY;
			w = safeZoneW;
			h = safeZoneH;
		};
	};
	class controls
	{
		delete ModIcons;
		delete B_Quit;
		delete B_Expansions;
		delete B_Credits;
		delete B_Player;
		delete B_Options;
		delete B_SinglePlayer;
		delete B_MissionEditor;
		delete B_MultiPlayer;
		delete B_SingleMission;
		delete B_Campaign;
		delete Date;
		delete ModList;
		delete TrafficLight;

		delete Version;
		delete InfoDLCs;
		delete InfoVersion;
		delete Footer;
		delete InfoDLCsOwned;
		// delete InfoNews;
		// delete InfoMods;
		
		class Logo: RscPictureKeepAspect
		{
			text="\l6AA_branding\logo\l6AA_logo.paa";
			tooltip="";
			x="0.4425 - 	5 * 	(pixelW * pixelGrid * 2)";
			y="safezoneY + (3 - 0.5 * 	5) * 	(pixelH * pixelGrid * 2)";
			w="3 * 	5 * 	(pixelW * pixelGrid * 2)";
			h="2 * 	5 * 	(pixelH * pixelGrid * 2)";
			onButtonClick="";
			onKillFocus="";
			onSetFocus="";
			onLoad="";
		};
		class LogoApex: Logo
		{
			show=0;
			text="\l6AA_branding\logo\l6AA_logo.paa";
			onLoad="";
		};
		class GroupSingleplayer: RscControlsGroupNoScrollbars
		{
			class Controls;
		};
		class GroupMultiplayer: GroupSingleplayer {
			h = "(9 *     1.5) *     (pixelH * pixelGrid * 2)";
			class Controls : Controls
			{
				class Campaigns;
				class joinTraining1 : Campaigns {
					idc = -1;
					text = "l6AA Training Server 1";
					colorBackground[] = {0.596,0.11,0.11,1};
					colorBackgroundActive[] = {0.969,0.722,0,1};
					colorFocused[] = {1,1,1,1};
					tooltip = "5200";
					y = "(3 *     1.5) *     (pixelH * pixelGrid * 2) +     (pixelH)";
					action = "";
					onbuttonclick = "connectToServer ['172.93.183.40', 5200, ''];";
					Onload = "";
				};
				class joinTraining2 : joinTraining1 {
					text = "l6AA Training Server 2";
					tooltip = "5500";
					y = "(4 *     1.5) *     (pixelH * pixelGrid * 2) +     (pixelH)";
					onbuttonclick = "connectToServer ['172.93.183.40', 5500, ''];";
				};
				class joinOps : joinTraining1 {
					text = "l6AA Operations Server";
					tooltip = "5100";
					y = "(5 *     1.5) *     (pixelH * pixelGrid * 2) +     (pixelH)";
					onbuttonclick = "connectToServer ['172.93.183.40', 5100, ''];";
				};
				class joinPipeline : joinTraining1 {
					text = "l6AA Pipeline Server";
					tooltip = "5400 (l6AA Pipeline Modpack Required)";
					y = "(6 *     1.5) *     (pixelH * pixelGrid * 2) +     (pixelH)";
					onbuttonclick = "connectToServer ['172.93.183.40', 5400, ''];";
				};
			};
		};
		class l6AAJoin : RscButton {
			idc = -1;
			text = "l6AA_branding\logo\l6AA_ca.paa";
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0.5324,0.4134,0.0543,1};
			colorFocused[] = {1,1,1,1};
			colorText[] = {1,1,1,0.5};

			h = "2 * 	(pixelH * pixelGrid * 2)";
			x = "safezoneX + safezoneW - 4 *         2 *     (pixelW * pixelGrid * 2)";
			w = "4 *     (pixelW * pixelGrid * 2)";
			y = "safezoneY + 2 * 	(pixelH * pixelGrid * 2)";

			tooltip = "l6AA Website";
			url = "https://www.taskforceexodus.com/";
			onMouseEnter = "";
			onSetFocus = "";
			onMouseExit = "";
			onKillFocus = "";

			style = 48;
		};
		class Spotlight2: RscText
		{
			idc=1020;
			x="0.5 - (0.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2)";
			y="0.95 - (	10 / 2) * 	(pixelH * pixelGridNoUIScale * 2)";
			w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
			h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
			show=0;
		};
		class Spotlight3: RscMainMenuSpotlight
		{
			idc=1022;
			x="0.5 + (0.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) + 	(2 * pixelW)";
			class Controls: Controls
			{
				class GroupPicture: GroupPicture
				{
					class Controls: Controls
					{
						class Picture: RscPicture
						{
							text="l6AA_branding\data\editor.paa";
							w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
							h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
						};
						class Video: Video
						{
							text="\a3\Ui_f\Video\spotlight3.ogv";
						};
					};
				};
				class GroupHover: GroupHover
				{
					class Controls: Controls
					{
						class Overlay: Overlay
						{
						};
						class LineLeft: LineLeft
						{
						};
						class LineRight: LineRight
						{
						};
						class LineTop: LineTop
						{
							text="$STR_A3_RscDisplayMain_Spotlight_Create";
						};
						class LineBottom: LineBottom
						{
						};
					};
				};
				class TextBackground: TextBackground
				{
				};
				class Text: Text
				{
					text="$STR_A3_RscDisplayMain_ButtonEditor";
				};
				class Button: Button
				{
				};
			};
		};
		class SpotlightPrev: RscActivePictureKeepAspect
		{
			idc=1060;
			text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlightPrev_ca.paa";
			color[]={1,1,1,0.25};
			fade=1;
			x="0.5 - (0.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2)";
			y="0.95 - (	10 / 2 + (	10 / 8)) * 	(pixelH * pixelGridNoUIScale * 2)";
			w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
			h="(	10 / 8) * 	(pixelH * pixelGridNoUIScale * 2)";
		};
		class SpotlightNext: SpotlightPrev
		{
			idc=1061;
			text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlightNext_ca.paa";
			y="0.95 + (	10 / 2) * 	(pixelH * pixelGridNoUIScale * 2)";
			angle=180;
		};
		class InfoMods: RscControlsGroupNoHScrollbars
		{
			idc=1030;
			x="safezoneX + 	(4 * pixelH)";
			y="safezoneY + safezoneH - (1 * 		2 + 	1) * 	(pixelH * pixelGrid * 2) - 2 * 	(4 * pixelH)";
			w="(safezoneW - 		10 * 	(pixelW * pixelGrid * 2) - 	(4 * pixelH)) - 	(4 * pixelH)";
			h="2 * 	(pixelH * pixelGrid * 2)";
			class Controls
			{
				class Background: RscPicture
				{
					idc=1034;
					text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradientMods_ca.paa";
					colorText[]={0,0,0,0.75};
					x=0;
					y=0;
					w="4 * 		2 * 	(pixelW * pixelGrid * 2)";
					h="2 * 	(pixelH * pixelGrid * 2)";
				};
				class BackgroundIcon: RscPicture
				{
					idc=1035;
					text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\backgroundModsIcon_ca.paa";
					colorText[]={0,0,0,0.75};
					x=0;
					y=0;
					w="2 * 		2 * 	(pixelW * pixelGrid * 2)";
					h="2 * 	(pixelH * pixelGrid * 2)";
				};
				class Icon: RscPicture
				{
					idc=1036;
					text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\infoMods_ca.paa";
					colorText[]={1,1,1,0.5};
					x=0;
					y=0;
					w="2 * 	(pixelW * pixelGrid * 2)";
					h="2 * 	(pixelH * pixelGrid * 2)";
				};
				class Button: RscButtonMenu
				{
					idc=1037;
					tooltip="$STR_A3_RscDisplayMain_InfoMods_tooltip";
					url="https://steamcommunity.com/workshop/browse?appid=107410";
					colorBackground[]={0,0,0,0};
					colorBackgroundFocused[]={0,0,0,0};
					colorBackground2[]={0,0,0,0};
					x=0;
					y=0;
					w="2 * 	(pixelW * pixelGrid * 2)";
					h="2 * 	(pixelH * pixelGrid * 2)";
				};
				class Icons: RscControlsGroupNoHScrollbars
				{
					idc=141;
					x="1.5 * 		2 * 	(pixelW * pixelGrid * 2)";
					y=0;
					w="(safezoneW - (1.5 * 		2 + 		10) * 	(pixelW * pixelGrid * 2) - 	(4 * pixelH)) - 	(4 * pixelH)";
					h="2 * 	(pixelH * pixelGrid * 2)";
					class Controls
					{
					};
				};
			};
		};
		class InfoNews: InfoMods
		{
			idc=1032;
			x="safezoneX + safezoneW - 		10 * 	(pixelW * pixelGrid * 2) - 	(4 * pixelH)";
			y="safezoneY + safezoneH - (1 * 		2 + 	1) * 	(pixelH * pixelGrid * 2) - 2 * 	(4 * pixelH)";
			w="10 * 	(pixelW * pixelGrid * 2)";
			class Controls: Controls
			{
				class Background: Background
				{
					x="(		10 - 4 * 		2) * 	(pixelW * pixelGrid * 2)";
					angle=180;
				};
				class BackgroundIcon: BackgroundIcon
				{
					x="(		10 - 2 * 		2) * 	(pixelW * pixelGrid * 2)";
					angle=180;
				};
				class Icon: Icon
				{
					x="(		10 - 		2) * 	(pixelW * pixelGrid * 2)";
					text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\infoNews_ca.paa";
				};
				class News: RscText
				{
					style=1;
					text="SITREP";
					sizeEx="(pixelH * pixelGrid * 2)";
					font="RobotoCondensedLight";
					shadow=1;
					colorBackground[]={0,0,0,0};
					x=0;
					y=0;
					w="(		10 - 1.25 * 		2) * 	(pixelW * pixelGrid * 2)";
					h="2 * 	(pixelH * pixelGrid * 2)";
					onLoad="(_this select 0) ctrlenable false;";
				};
				class Notification: RscPicture
				{
					idc=1039;
					text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\notification_ca.paa";
					x="(		10 - 0.375 * 		2) * 	(pixelW * pixelGrid * 2)";
					y="(0.125 * 		2) * 	(pixelH * pixelGrid * 2)";
					w="(0.375 * 		2) * 	(pixelW * pixelGrid * 2)";
					h="(0.375 * 		2) * 	(pixelH * pixelGrid * 2)";
					show=0;
				};
				class Button: Button
				{
					tooltip="$STR_A3_RscDisplayMain_InfoNews_tooltip";
					url="https://dev.arma3.com/latest/sitrep";
					w="10 * 	(pixelW * pixelGrid * 2)";
				};
			};
		};

		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		delete Spotlight1;
	};
};
class CfgMainMenuSpotlight
{
    delete ApexProtocol;
    delete BootCamp;
    delete EastWind;
    delete Orange_CampaignGerman;
    delete Orange_Showcase_IDAP;
    delete Orange_Showcase_LoW;
    delete Orange_Campaign;
    delete Showcase_TankDestroyers;
    delete Tacops_Campaign_03;
    delete Tacops_Campaign_02;
    delete Tacops_Campaign_01;
    delete Tanks_Campaign_01;
    delete OldMan;
    delete Contact_Campaign;
    delete gm_campaign_01;
    delete SP_FD14;
    delete AoW_Showcase_AoW;
    delete AoW_Showcase_Future;
    delete vn_showcase_macv;
    delete vn_showcase_macv_13;
    delete vn_showcase_pavn;
    delete vn_showcase_pavn_13;
    delete vn_sogba;
	class l6AA_Training
	{
		text = "Training Server";
		picture = "l6AA_branding\data\train.paa";
		action = "connectToServer ['connect.16aa.net', 2402, '']";
		actionText = "l6AA Training Server";
		condition = "true";
	};
	class l6AA_Ops
	{
		text = "Main Operations Server";
		picture = "l6AA_branding\data\ops.paa";
		action = "connectToServer ['connect.16aa.net', 2302, '']";
		actionText = "l6AA Operations Server (5100)";
		condition = "true";
	};
	class l6AA_Backup
	{
		text = "Backup Server";
		picture = "l6AA_branding\data\pipe.paa";
		action = "connectToServer ['backup.connect.16aa.net', 2302, '']";
		actionText = "l6AA Pipeline Server (5400)";
		condition = "true";
	};
};
class RscBackgroundLogo: RscPictureKeepAspect
{
	text="\l6AA_branding\logo\l6AA_logo.paa";
	x="0.33375 * safezoneW";
	y="0.29 * safezoneH";
	w="0.3325 * safezoneW";
	h="0.39375 * safezoneH";
};
class RscDisplayStart: RscStandardDisplay
{
	class controls
	{
		class LoadingStart: RscControlsGroup
		{
			class controls
			{
				class Noise: RscPicture
				{
					idc=1201;
					text="l6AA_branding\logo\l6AA_BG1.jpg";
					x="0 * safezoneW";
					y="0 * safezoneH";
					w="1 * safezoneW";
					h="1 * safezoneH";
				};
				class Logo: RscPictureKeepAspect
				{
					idc=1200;
					text="l6AA_branding\logo\l6AA_Logo.paa";
					x="0.33375 * safezoneW";
					y="0.29 * safezoneH";
					w="0.3325 * safezoneW";
					h="0.39375 * safezoneH";
				};
			};
		};
	};
};
class RscDisplayNotFreeze: RscStandardDisplay
{
	class controls
	{
		class LoadingStart: RscControlsGroup
		{
			class controls
			{
				class Noise: RscPicture
				{
					idc=1201;
					text="l6AA_branding\logo\l6AA_BG1.jpg";
					x="0 * safezoneW";
					y="0 * safezoneH";
					w="1 * safezoneW";
					h="1 * safezoneH";
				};
				class Logo: RscPictureKeepAspect
				{
					idc=1200;
					text="l6AA_branding\logo\l6AA_Logo.paa";
					x="0.33375 * safezoneW";
					y="0.29 * safezoneH";
					w="0.3325 * safezoneW";
					h="0.39375 * safezoneH";
				};
			};
		};
	};
};
class RscDisplayLoadMission: RscStandardDisplay
{
	class controls
	{
		class LoadingStart: RscControlsGroup
		{
			class controls
			{
				class Noise: RscPicture
				{
					idc=1201;
					text="l6AA_branding\logo\l6AA_BG1.jpg";
					x="0 * safezoneW";
					y="0 * safezoneH";
					w="1 * safezoneW";
					h="1 * safezoneH";
				};
				class Logo: RscPictureKeepAspect
				{
					idc=1200;
					text="l6AA_branding\logo\l6AA_Logo.paa";
					x="0.33375 * safezoneW";
					y="0.29 * safezoneH";
					w="0.3325 * safezoneW";
					h="0.39375 * safezoneH";
				};
			};
		};
	};
};
class RscTitles
{
	class SplashArma3
	{
		class Noise: RscPicture
		{
			idc=1201;
			text="l6AA_branding\logo\l6AA_BG1.jpg";
			x="0 * safezoneW";
			y="0 * safezoneH";
			w="1 * safezoneW";
			h="1 * safezoneH";
		};
		class Logo: RscPictureKeepAspect
		{
			idc=1200;
			text="l6AA_branding\logo\l6AA_Logo.paa";
			x="0.33375 * safezoneW";
			y="0.29 * safezoneH";
			w="0.3325 * safezoneW";
			h="0.39375 * safezoneH";
		};
	};
};