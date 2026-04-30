#include "../tesla_fsd_app.h"
#include "../scenes_config/app_scene_functions.h"

void tesla_fsd_scene_about_on_enter(void* context) {
    TeslaFSDApp* app = context;

    text_box_reset(app->text_box);
    text_box_set_font(app->text_box, TextBoxFontSecondary);
    text_box_set_focus(app->text_box, TextBoxFocusStart);

    text_box_set_text(
        app->text_box,
        "Tesla FSD Unlock v" TESLA_FSD_VERSION "\n"
        "\n"
        "HW3 / HW4 / Legacy + Force FSD\n"
        "Chime suppress, Emerg. detect\n"
        "Nag killer, Track mode,\n"
        "BMS dashboard, Blind spot alert,\n"
        "High beam strobe, Speed display,\n"
        "Steering mode + more.\n"
        "\n"
        "Works via OBD-II or X179 connector.\n"
        "\n"
        "github.com/cquanu/flipper-tesla");

    view_dispatcher_switch_to_view(app->view_dispatcher, TeslaFSDViewTextBox);
}

bool tesla_fsd_scene_about_on_event(void* context, SceneManagerEvent event) {
    UNUSED(context);
    UNUSED(event);
    return false;
}

void tesla_fsd_scene_about_on_exit(void* context) {
    TeslaFSDApp* app = context;
    text_box_reset(app->text_box);
}
