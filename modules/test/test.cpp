#include "test.h"
#include "editor/plugins/script_editor_plugin.h"
#include "core/print_string.h"


void Test::add(int value) {

    count+=value;
}

void Test::reset() {

    count=0;
}

int Test::get_total() const {

    return count;
}

void Test::_bind_methods() {

    ObjectTypeDB::bind_method("add",&Test::add);
    ObjectTypeDB::bind_method("reset",&Test::reset);
    ObjectTypeDB::bind_method("get_total",&Test::get_total);
}

Test::Test() {
    count=0;
    ScriptTextEditorProxy *proxy = memnew(ScriptTextEditorProxy);
    ScriptTextEditor::set_editor_proxy(proxy);
    print_line("**** test is being called ****");
}
