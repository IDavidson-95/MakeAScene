#include "splashkit.h"

void dream()
{
    load_bitmap("background", "dreamBackground.jpg");
    load_bitmap("Dream", "jebDream.jpg");
    load_sound_effect("Dream", "dream.wav");
    load_font("Inspiring Font", "inspiringFont.ttf");
    clear_screen(COLOR_BLACK);
    draw_bitmap("dreamBackground.jpg", 0, 0);
    draw_bitmap("Dream", 250, 0);
    draw_text("DREAM", COLOR_WHITE, "Inspiring Font", 100, 325, 25);
    refresh_screen(60);
    play_sound_effect("Dream");
}

void plan()
{
    load_bitmap("plan", "plan.jpg");
    load_sound_effect("plan", "plan.wav");
    load_font("Inspiring Font", "inspiringFont.ttf");
    clear_screen(COLOR_BLACK);
    draw_bitmap("plan", 0, 0);
    draw_text("PLAN", COLOR_WHITE, "Inspiring Font", 100, 325, 425);
    refresh_screen(60);
    play_sound_effect("plan.wav");
}

void fail()
{
    load_bitmap("fail", "fail.jpg");
    load_sound_effect("fail", "fail.wav");
    load_font("Inspiring Font", "inspiringFont.ttf");
    clear_screen(COLOR_BLACK);
    draw_bitmap("fail", 0, 0);
    draw_text("FAIL", COLOR_WHITE, "Inspiring Font", 100, 200, 400);
    refresh_screen(60);
    play_sound_effect("fail.wav");
}

void plan_again()
{
    load_bitmap("planAgain", "planAgain.jpg");
    load_sound_effect("plan", "plan.wav");
    load_font("Inspiring Font", "inspiringFont.ttf");
    clear_screen(COLOR_BLACK);
    draw_bitmap("plan", 0, 0);
    draw_text("PLAN AGAIN", COLOR_WHITE, "Inspiring Font", 100, 250, 425);
    refresh_screen(60);
    play_sound_effect("plan.wav");
}

void succeed()
{
    load_bitmap("succeed", "succeed.png");
    load_sound_effect("succeed", "succeed.mp3");
    load_font("Inspiring Font", "inspiringFont.ttf");
    clear_screen(COLOR_BLACK);
    draw_bitmap("succeed", 0, 0);
    draw_text("SUCCEED", COLOR_WHITE, "Inspiring Font", 100, 200, 50);
    refresh_screen(60);
    play_sound_effect("succeed");
}

void succeed2()
{
    load_bitmap("succeed2", "succeed2.png");
    clear_screen(COLOR_WHITE);
    draw_bitmap("succeed2", 0, 0);
    refresh_screen(60);
}

int main()
{
    open_window("1.3C KSP", 800, 600);
    dream();
    delay(6000);
    plan();
    delay(5000);
    fail();
    delay(5000);
    plan_again();
    delay(5000);
    succeed();
    delay(6000);
    succeed2();
    delay(8000);

    return 0;
}