#ifndef GTKMM_EXAMPLE_HELLOWORLD_H
#define GTKMM_EXAMPLE_HELLOWORLD_H

#include <gtkmm/button.h>
#include <gtkmm/window.h>
#include <gtkmm/box.h>

class HelloButton : public Gtk::Button {
    using Gtk::Button::Button;

protected:
    void on_clicked() override;
};

class HelloWorld : public Gtk::Window {

public:
    HelloWorld();
    ~HelloWorld() override;

protected:
    // Signal handlers:
    void on_button_clicked();

    // Member widgets:
    HelloButton m_button_hello;
    HelloButton m_button_world;
    Gtk::Box box;
};

#endif // GTKMM_EXAMPLE_HELLOWORLD_H
