#include "register_types.h"
#include "object_type_db.h"
#include "test.h"

void register_test_types() {
        ObjectTypeDB::register_type<Test>();
}

void unregister_test_types() {
   //nothing to do here
}
