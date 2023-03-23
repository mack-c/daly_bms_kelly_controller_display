// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_TopPanel;
extern lv_obj_t * ui_TimeLabel;
extern lv_obj_t * ui_VoltageLabel;
extern lv_obj_t * ui_batteryPercentLabel;
extern lv_obj_t * ui_greenArrowRightPNG;
extern lv_obj_t * ui_greenArrowLeftPNG;
extern lv_obj_t * ui_batteryPNG;
extern lv_obj_t * ui_batteryFillLevelSlider;
extern lv_obj_t * ui_SpeedPanel;
extern lv_obj_t * ui_SpeedLabel;
extern lv_obj_t * ui_kmhText;
extern lv_obj_t * ui_PowerPanel;
extern lv_obj_t * ui_AmpereLabel;
extern lv_obj_t * ui_WattLabel;
extern lv_obj_t * ui_powerBG;
extern lv_obj_t * ui_powerSlider;
extern lv_obj_t * ui_powerRegenSlider;
extern lv_obj_t * ui_TempPanel;
extern lv_obj_t * ui_motorPNG;
extern lv_obj_t * ui_batteryEmptyPNG;
extern lv_obj_t * ui_snowflakePNG;
extern lv_obj_t * ui_motorControllerTempLabel;
extern lv_obj_t * ui_batteryTempLabel;
extern lv_obj_t * ui_outdoorTempLabel;
extern lv_obj_t * ui_EnergyPanel;
extern lv_obj_t * ui_rangeText;
extern lv_obj_t * ui_averagePNG;
extern lv_obj_t * ui_ecoText;
extern lv_obj_t * ui_averageAhLabel;
extern lv_obj_t * ui_ecoLabel;
extern lv_obj_t * ui_rangeLabel;
extern lv_obj_t * ui_BatteryPanel;
extern lv_obj_t * ui_cellDiffText;
extern lv_obj_t * ui_cellMaxText;
extern lv_obj_t * ui_cellMinText;
extern lv_obj_t * ui_cellMaxLabel;
extern lv_obj_t * ui_cellDiffLabel;
extern lv_obj_t * ui_cellMinLabel;
extern lv_obj_t * ui_BottomPanel;
extern lv_obj_t * ui_totalKmLabel;
extern lv_obj_t * ui_dayKmLabel;
extern lv_obj_t * ui_ESimsonMackText;
extern lv_obj_t * ui_errorPNG;
extern lv_obj_t * ui_errorTextArea;


LV_IMG_DECLARE(ui_img_greenarrow1_png);    // assets\greenArrow1.png
LV_IMG_DECLARE(ui_img_batterie_weis_leer_png);    // assets\batterie_weis_leer.png
LV_IMG_DECLARE(ui_img_batterie_fuellstand_png);    // assets\batterie_fuellstand.png
LV_IMG_DECLARE(ui_img_glow_17_png);    // assets\glow_17.png
LV_IMG_DECLARE(ui_img_farb_balken_png);    // assets\farb_balken.png
LV_IMG_DECLARE(ui_img_blauer_balken_png);    // assets\blauer_balken.png
LV_IMG_DECLARE(ui_img_motor_weis_png);    // assets\motor_weis.png
LV_IMG_DECLARE(ui_img_snowflake_png);    // assets\snowflake.png
LV_IMG_DECLARE(ui_img_durchschnitt_png);    // assets\durchschnitt.png
LV_IMG_DECLARE(ui_img_472392036);    // assets\error-icon.png


LV_FONT_DECLARE(ui_font_lato14);
LV_FONT_DECLARE(ui_font_lato20);
LV_FONT_DECLARE(ui_font_lato80);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
