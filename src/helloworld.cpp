#include "helloworld.h"
#include <iostream>

void HelloButton::on_clicked() {
    std::cout << "Button: " << this->get_label() << " was clicked." << std::endl;
    Gtk::Button::on_clicked();
}

HelloWorld::HelloWorld() : m_button_hello("Hello"), m_button_world("World") {
    m_button_hello.set_margin(10);
    m_button_hello.signal_clicked().connect(sigc::mem_fun(*this, &HelloWorld::on_button_clicked));
    m_button_world.set_margin(10);
    m_button_world.signal_clicked().connect(sigc::mem_fun(*this, &HelloWorld::on_button_clicked));

    set_child(box);
    box.append(m_button_hello);
    box.append(m_button_world);
    box.set_orientation(Gtk::Orientation::VERTICAL);
}

HelloWorld::~HelloWorld() {}

void HelloWorld::on_button_clicked() { std::cout << "Clicked signal event." << std::endl; }
