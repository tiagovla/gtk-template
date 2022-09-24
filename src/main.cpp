#include "helloworld.h"
#include <gtkmm/application.h>

int main(int argc, char *argv[]) {
    Glib::RefPtr<Gtk::Application> app = Gtk::Application::create("org.gtkmm.hello");
    return app->make_window_and_run<HelloWorld>(argc, argv);
}
