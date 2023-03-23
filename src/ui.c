// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_TopPanel;
lv_obj_t * ui_TimeLabel;
lv_obj_t * ui_VoltageLabel;
lv_obj_t * ui_batteryPercentLabel;
lv_obj_t * ui_greenArrowRightPNG;
lv_obj_t * ui_greenArrowLeftPNG;
lv_obj_t * ui_batteryPNG;
lv_obj_t * ui_batteryFillLevelSlider;
lv_obj_t * ui_SpeedPanel;
lv_obj_t * ui_SpeedLabel;
lv_obj_t * ui_kmhText;
lv_obj_t * ui_PowerPanel;
lv_obj_t * ui_AmpereLabel;
lv_obj_t * ui_WattLabel;
lv_obj_t * ui_powerBG;
lv_obj_t * ui_powerSlider;
lv_obj_t * ui_powerRegenSlider;
lv_obj_t * ui_TempPanel;
lv_obj_t * ui_motorPNG;
lv_obj_t * ui_batteryEmptyPNG;
lv_obj_t * ui_snowflakePNG;
lv_obj_t * ui_motorControllerTempLabel;
lv_obj_t * ui_batteryTempLabel;
lv_obj_t * ui_outdoorTempLabel;
lv_obj_t * ui_EnergyPanel;
lv_obj_t * ui_rangeText;
lv_obj_t * ui_averagePNG;
lv_obj_t * ui_ecoText;
lv_obj_t * ui_averageAhLabel;
lv_obj_t * ui_ecoLabel;
lv_obj_t * ui_rangeLabel;
lv_obj_t * ui_BatteryPanel;
lv_obj_t * ui_cellDiffText;
lv_obj_t * ui_cellMaxText;
lv_obj_t * ui_cellMinText;
lv_obj_t * ui_cellMaxLabel;
lv_obj_t * ui_cellDiffLabel;
lv_obj_t * ui_cellMinLabel;
lv_obj_t * ui_BottomPanel;
lv_obj_t * ui_totalKmLabel;
lv_obj_t * ui_dayKmLabel;
lv_obj_t * ui_ESimsonMackText;
lv_obj_t * ui_errorPNG;
lv_obj_t * ui_errorTextArea;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TopPanel = lv_obj_create(ui_Screen1);
    lv_obj_set_height(ui_TopPanel, 48);
    lv_obj_set_width(ui_TopPanel, lv_pct(100));
    lv_obj_set_align(ui_TopPanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_TopPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_TopPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TopPanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TopPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_TopPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_TopPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TimeLabel = lv_label_create(ui_TopPanel);
    lv_obj_set_width(ui_TimeLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TimeLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_TimeLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_TimeLabel, "--:--");
    lv_obj_set_style_text_font(ui_TimeLabel, &ui_font_lato20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VoltageLabel = lv_label_create(ui_TopPanel);
    lv_obj_set_width(ui_VoltageLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_VoltageLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_VoltageLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_VoltageLabel, "-- V");
    lv_obj_set_style_text_font(ui_VoltageLabel, &ui_font_lato20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_batteryPercentLabel = lv_label_create(ui_TopPanel);
    lv_obj_set_width(ui_batteryPercentLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_batteryPercentLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_batteryPercentLabel, 150);
    lv_obj_set_y(ui_batteryPercentLabel, 0);
    lv_obj_set_align(ui_batteryPercentLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_batteryPercentLabel, "-- %");
    lv_obj_set_style_text_font(ui_batteryPercentLabel, &ui_font_lato20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_greenArrowRightPNG = lv_img_create(ui_TopPanel);
    lv_img_set_src(ui_greenArrowRightPNG, &ui_img_greenarrow1_png);
    lv_obj_set_width(ui_greenArrowRightPNG, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_greenArrowRightPNG, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_greenArrowRightPNG, 90);
    lv_obj_set_y(ui_greenArrowRightPNG, 0);
    lv_obj_set_align(ui_greenArrowRightPNG, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_greenArrowRightPNG, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_greenArrowRightPNG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_greenArrowRightPNG, 110);

    ui_greenArrowLeftPNG = lv_img_create(ui_TopPanel);
    lv_img_set_src(ui_greenArrowLeftPNG, &ui_img_greenarrow1_png);
    lv_obj_set_width(ui_greenArrowLeftPNG, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_greenArrowLeftPNG, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_greenArrowLeftPNG, -90);
    lv_obj_set_y(ui_greenArrowLeftPNG, 0);
    lv_obj_set_align(ui_greenArrowLeftPNG, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_greenArrowLeftPNG, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_greenArrowLeftPNG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_angle(ui_greenArrowLeftPNG, 1800);
    lv_img_set_zoom(ui_greenArrowLeftPNG, 110);

    ui_batteryPNG = lv_img_create(ui_TopPanel);
    lv_img_set_src(ui_batteryPNG, &ui_img_batterie_weis_leer_png);
    lv_obj_set_width(ui_batteryPNG, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_batteryPNG, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_batteryPNG, 205);
    lv_obj_set_y(ui_batteryPNG, 0);
    lv_obj_set_align(ui_batteryPNG, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_batteryPNG, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_batteryPNG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_batteryPNG, 255);

    ui_batteryFillLevelSlider = lv_slider_create(ui_batteryPNG);
    lv_slider_set_value(ui_batteryFillLevelSlider, 50, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_batteryFillLevelSlider) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(
            ui_batteryFillLevelSlider, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_batteryFillLevelSlider, 40);
    lv_obj_set_height(ui_batteryFillLevelSlider, 17);
    lv_obj_set_align(ui_batteryFillLevelSlider, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_batteryFillLevelSlider, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_batteryFillLevelSlider, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_batteryFillLevelSlider, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_batteryFillLevelSlider, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_batteryFillLevelSlider, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_batteryFillLevelSlider, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_batteryFillLevelSlider, &ui_img_batterie_fuellstand_png,
                                LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_batteryFillLevelSlider, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_batteryFillLevelSlider, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_batteryFillLevelSlider, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_SpeedPanel = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_SpeedPanel, 180);
    lv_obj_set_height(ui_SpeedPanel, lv_pct(35));
    lv_obj_set_x(ui_SpeedPanel, -150);
    lv_obj_set_y(ui_SpeedPanel, -56);
    lv_obj_set_align(ui_SpeedPanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_SpeedPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_SpeedPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_SpeedPanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SpeedPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_SpeedPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_SpeedPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SpeedLabel = lv_label_create(ui_SpeedPanel);
    lv_obj_set_width(ui_SpeedLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SpeedLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SpeedLabel, -25);
    lv_obj_set_y(ui_SpeedLabel, 0);
    lv_obj_set_align(ui_SpeedLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SpeedLabel, "--");
    lv_obj_set_style_text_font(ui_SpeedLabel, &ui_font_lato80, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_kmhText = lv_label_create(ui_SpeedPanel);
    lv_obj_set_width(ui_kmhText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_kmhText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_kmhText, 50);
    lv_obj_set_y(ui_kmhText, 20);
    lv_obj_set_align(ui_kmhText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_kmhText, "Km/h");
    lv_obj_set_style_text_font(ui_kmhText, &ui_font_lato20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PowerPanel = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_PowerPanel, 300);
    lv_obj_set_height(ui_PowerPanel, 112);
    lv_obj_set_x(ui_PowerPanel, 90);
    lv_obj_set_y(ui_PowerPanel, -56);
    lv_obj_set_align(ui_PowerPanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PowerPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_PowerPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_PowerPanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PowerPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_PowerPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_PowerPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_AmpereLabel = lv_label_create(ui_PowerPanel);
    lv_obj_set_width(ui_AmpereLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_AmpereLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_AmpereLabel, -90);
    lv_obj_set_y(ui_AmpereLabel, 30);
    lv_obj_set_align(ui_AmpereLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_AmpereLabel, "-- A");
    lv_obj_set_style_text_font(ui_AmpereLabel, &ui_font_lato20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WattLabel = lv_label_create(ui_PowerPanel);
    lv_obj_set_width(ui_WattLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WattLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WattLabel, 90);
    lv_obj_set_y(ui_WattLabel, 30);
    lv_obj_set_align(ui_WattLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WattLabel, "-- W");
    lv_obj_set_style_text_font(ui_WattLabel, &ui_font_lato20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_powerBG = lv_img_create(ui_PowerPanel);
    lv_img_set_src(ui_powerBG, &ui_img_glow_17_png);
    lv_obj_set_width(ui_powerBG, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_powerBG, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_powerBG, 0);
    lv_obj_set_y(ui_powerBG, -20);
    lv_obj_set_align(ui_powerBG, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_powerBG, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_powerBG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_powerSlider = lv_slider_create(ui_powerBG);
    lv_slider_set_range(ui_powerSlider, 0, 65);
    lv_slider_set_value(ui_powerSlider, 5, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_powerSlider) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_powerSlider, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_powerSlider, 160);
    lv_obj_set_height(ui_powerSlider, 22);
    lv_obj_set_x(ui_powerSlider, 52);
    lv_obj_set_y(ui_powerSlider, 0);
    lv_obj_set_align(ui_powerSlider, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_powerSlider, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_powerSlider, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_powerSlider, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_powerSlider, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_powerSlider, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_powerSlider, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_powerSlider, &ui_img_farb_balken_png, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_powerSlider, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_powerSlider, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_powerSlider, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_powerRegenSlider = lv_slider_create(ui_powerBG);
    lv_slider_set_range(ui_powerRegenSlider, -15, 0);
    lv_slider_set_value(ui_powerRegenSlider, -5, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_powerRegenSlider) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_powerRegenSlider, 0,
                                                                                                     LV_ANIM_OFF);
    lv_obj_set_width(ui_powerRegenSlider, 103);
    lv_obj_set_height(ui_powerRegenSlider, 22);
    lv_obj_set_x(ui_powerRegenSlider, -80);
    lv_obj_set_y(ui_powerRegenSlider, 0);
    lv_obj_set_align(ui_powerRegenSlider, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_powerRegenSlider, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_powerRegenSlider, &ui_img_blauer_balken_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_powerRegenSlider, 1, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_powerRegenSlider, lv_color_hex(0x000000), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_powerRegenSlider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_powerRegenSlider, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_powerRegenSlider, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_powerRegenSlider, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_TempPanel = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_TempPanel, 160);
    lv_obj_set_height(ui_TempPanel, lv_pct(35));
    lv_obj_set_x(ui_TempPanel, -160);
    lv_obj_set_y(ui_TempPanel, 56);
    lv_obj_set_align(ui_TempPanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TempPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_TempPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TempPanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TempPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_motorPNG = lv_img_create(ui_TempPanel);
    lv_img_set_src(ui_motorPNG, &ui_img_motor_weis_png);
    lv_obj_set_width(ui_motorPNG, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_motorPNG, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_motorPNG, -50);
    lv_obj_set_y(ui_motorPNG, -35);
    lv_obj_set_align(ui_motorPNG, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_motorPNG, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_motorPNG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_motorPNG, 150);

    ui_batteryEmptyPNG = lv_img_create(ui_TempPanel);
    lv_img_set_src(ui_batteryEmptyPNG, &ui_img_batterie_weis_leer_png);
    lv_obj_set_width(ui_batteryEmptyPNG, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_batteryEmptyPNG, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_batteryEmptyPNG, -50);
    lv_obj_set_y(ui_batteryEmptyPNG, -1);
    lv_obj_set_align(ui_batteryEmptyPNG, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_batteryEmptyPNG, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_batteryEmptyPNG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_batteryEmptyPNG, 170);

    ui_snowflakePNG = lv_img_create(ui_TempPanel);
    lv_img_set_src(ui_snowflakePNG, &ui_img_snowflake_png);
    lv_obj_set_width(ui_snowflakePNG, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_snowflakePNG, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_snowflakePNG, -50);
    lv_obj_set_y(ui_snowflakePNG, 30);
    lv_obj_set_align(ui_snowflakePNG, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_snowflakePNG, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_snowflakePNG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_snowflakePNG, 130);

    ui_motorControllerTempLabel = lv_label_create(ui_TempPanel);
    lv_obj_set_width(ui_motorControllerTempLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_motorControllerTempLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_motorControllerTempLabel, 20);
    lv_obj_set_y(ui_motorControllerTempLabel, -33);
    lv_obj_set_align(ui_motorControllerTempLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_motorControllerTempLabel, "-- / -- °C");

    ui_batteryTempLabel = lv_label_create(ui_TempPanel);
    lv_obj_set_width(ui_batteryTempLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_batteryTempLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_batteryTempLabel, 20);
    lv_obj_set_y(ui_batteryTempLabel, 0);
    lv_obj_set_align(ui_batteryTempLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_batteryTempLabel, "-- / -- °C");

    ui_outdoorTempLabel = lv_label_create(ui_TempPanel);
    lv_obj_set_width(ui_outdoorTempLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_outdoorTempLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_outdoorTempLabel, 20);
    lv_obj_set_y(ui_outdoorTempLabel, 33);
    lv_obj_set_align(ui_outdoorTempLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_outdoorTempLabel, "-- °C");

    ui_EnergyPanel = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_EnergyPanel, 160);
    lv_obj_set_height(ui_EnergyPanel, lv_pct(35));
    lv_obj_set_x(ui_EnergyPanel, 0);
    lv_obj_set_y(ui_EnergyPanel, 56);
    lv_obj_set_align(ui_EnergyPanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_EnergyPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_EnergyPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_EnergyPanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_EnergyPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_rangeText = lv_label_create(ui_EnergyPanel);
    lv_obj_set_width(ui_rangeText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_rangeText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_rangeText, -50);
    lv_obj_set_y(ui_rangeText, 0);
    lv_obj_set_align(ui_rangeText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_rangeText, "RANGE");
    lv_obj_set_style_text_font(ui_rangeText, &ui_font_lato14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_averagePNG = lv_img_create(ui_EnergyPanel);
    lv_img_set_src(ui_averagePNG, &ui_img_durchschnitt_png);
    lv_obj_set_width(ui_averagePNG, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_averagePNG, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_averagePNG, -50);
    lv_obj_set_y(ui_averagePNG, -35);
    lv_obj_set_align(ui_averagePNG, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_averagePNG, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_averagePNG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_averagePNG, 120);

    ui_ecoText = lv_label_create(ui_EnergyPanel);
    lv_obj_set_width(ui_ecoText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ecoText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ecoText, -50);
    lv_obj_set_y(ui_ecoText, 33);
    lv_obj_set_align(ui_ecoText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ecoText, "USE");
    lv_obj_set_style_text_font(ui_ecoText, &ui_font_lato14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_averageAhLabel = lv_label_create(ui_EnergyPanel);
    lv_obj_set_width(ui_averageAhLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_averageAhLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_averageAhLabel, 20);
    lv_obj_set_y(ui_averageAhLabel, -33);
    lv_obj_set_align(ui_averageAhLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_averageAhLabel, "-- Ah/Km");

    ui_ecoLabel = lv_label_create(ui_EnergyPanel);
    lv_obj_set_width(ui_ecoLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ecoLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ecoLabel, 20);
    lv_obj_set_y(ui_ecoLabel, 33);
    lv_obj_set_align(ui_ecoLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ecoLabel, "-- Ah");

    ui_rangeLabel = lv_label_create(ui_EnergyPanel);
    lv_obj_set_width(ui_rangeLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_rangeLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_rangeLabel, 20);
    lv_obj_set_y(ui_rangeLabel, 0);
    lv_obj_set_align(ui_rangeLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_rangeLabel, "-- Km");

    ui_BatteryPanel = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_BatteryPanel, 160);
    lv_obj_set_height(ui_BatteryPanel, lv_pct(35));
    lv_obj_set_x(ui_BatteryPanel, 160);
    lv_obj_set_y(ui_BatteryPanel, 56);
    lv_obj_set_align(ui_BatteryPanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_BatteryPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_BatteryPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BatteryPanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BatteryPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_cellDiffText = lv_label_create(ui_BatteryPanel);
    lv_obj_set_width(ui_cellDiffText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_cellDiffText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_cellDiffText, -40);
    lv_obj_set_y(ui_cellDiffText, -33);
    lv_obj_set_align(ui_cellDiffText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_cellDiffText, "CELL DIFF");
    lv_obj_set_style_text_font(ui_cellDiffText, &ui_font_lato14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_cellMaxText = lv_label_create(ui_BatteryPanel);
    lv_obj_set_width(ui_cellMaxText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_cellMaxText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_cellMaxText, -40);
    lv_obj_set_y(ui_cellMaxText, 0);
    lv_obj_set_align(ui_cellMaxText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_cellMaxText, "CELL MAX");
    lv_obj_set_style_text_font(ui_cellMaxText, &ui_font_lato14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_cellMinText = lv_label_create(ui_BatteryPanel);
    lv_obj_set_width(ui_cellMinText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_cellMinText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_cellMinText, -40);
    lv_obj_set_y(ui_cellMinText, 33);
    lv_obj_set_align(ui_cellMinText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_cellMinText, "CELL MIN");
    lv_obj_set_style_text_font(ui_cellMinText, &ui_font_lato14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_cellMaxLabel = lv_label_create(ui_BatteryPanel);
    lv_obj_set_width(ui_cellMaxLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_cellMaxLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_cellMaxLabel, 35);
    lv_obj_set_y(ui_cellMaxLabel, 0);
    lv_obj_set_align(ui_cellMaxLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_cellMaxLabel, "-- V");

    ui_cellDiffLabel = lv_label_create(ui_BatteryPanel);
    lv_obj_set_width(ui_cellDiffLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_cellDiffLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_cellDiffLabel, 35);
    lv_obj_set_y(ui_cellDiffLabel, -33);
    lv_obj_set_align(ui_cellDiffLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_cellDiffLabel, "-- V");

    ui_cellMinLabel = lv_label_create(ui_BatteryPanel);
    lv_obj_set_width(ui_cellMinLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_cellMinLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_cellMinLabel, 35);
    lv_obj_set_y(ui_cellMinLabel, 33);
    lv_obj_set_align(ui_cellMinLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_cellMinLabel, "-- V");

    ui_BottomPanel = lv_obj_create(ui_Screen1);
    lv_obj_set_height(ui_BottomPanel, 50);
    lv_obj_set_width(ui_BottomPanel, lv_pct(100));
    lv_obj_set_align(ui_BottomPanel, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_BottomPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_BottomPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BottomPanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BottomPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_BottomPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_BottomPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_totalKmLabel = lv_label_create(ui_BottomPanel);
    lv_obj_set_width(ui_totalKmLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_totalKmLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_totalKmLabel, 200);
    lv_obj_set_y(ui_totalKmLabel, 0);
    lv_obj_set_align(ui_totalKmLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_totalKmLabel, "-- Km");

    ui_dayKmLabel = lv_label_create(ui_BottomPanel);
    lv_obj_set_width(ui_dayKmLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_dayKmLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_dayKmLabel, 130);
    lv_obj_set_y(ui_dayKmLabel, 0);
    lv_obj_set_align(ui_dayKmLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_dayKmLabel, "-- Km |");

    ui_ESimsonMackText = lv_label_create(ui_BottomPanel);
    lv_obj_set_width(ui_ESimsonMackText, LV_SIZE_CONTENT);   /// 200
    lv_obj_set_height(ui_ESimsonMackText, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_ESimsonMackText, -150);
    lv_obj_set_y(ui_ESimsonMackText, 0);
    lv_obj_set_align(ui_ESimsonMackText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ESimsonMackText, "E-Simson by MACK");

    ui_errorPNG = lv_img_create(ui_BottomPanel);
    lv_img_set_src(ui_errorPNG, &ui_img_472392036);
    lv_obj_set_width(ui_errorPNG, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_errorPNG, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_errorPNG, -215);
    lv_obj_set_y(ui_errorPNG, 0);
    lv_obj_set_align(ui_errorPNG, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_errorPNG, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_errorPNG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_errorPNG, 200);
    lv_obj_set_style_radius(ui_errorPNG, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_errorPNG, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_errorPNG, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_errorTextArea = lv_textarea_create(ui_BottomPanel);
    lv_obj_set_width(ui_errorTextArea, 430);
    lv_obj_set_height(ui_errorTextArea, 55);
    lv_obj_set_x(ui_errorTextArea, 20);
    lv_obj_set_y(ui_errorTextArea, 0);
    lv_obj_set_align(ui_errorTextArea, LV_ALIGN_CENTER);
    lv_textarea_set_text(ui_errorTextArea, "ERROR ");
    lv_obj_add_flag(ui_errorTextArea, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_set_style_text_font(ui_errorTextArea, &ui_font_lato14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_errorTextArea, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_errorTextArea, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_errorTextArea, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_errorTextArea, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_errorTextArea, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_errorTextArea, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_errorTextArea, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
