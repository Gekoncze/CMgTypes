#include "MgTypes.h"
#include <stdio.h>

Bool8 MgTypesValidator_validate() {
    Bool8 result = true;

    if(null != NULL) {
        result = false;
        fprintf(stderr, "Unexpected NULL value. Expected %p, but is %p.\n", null, NULL);
    }

    if(sizeof(Int8) != 1) {
        result = false;
        fprintf(stderr, "Unexpected %s size. Expected %u, but is %lu.\n", "Int8", 1, sizeof(Int8));
    }

    if(sizeof(Int16) != 2) {
        result = false;
        fprintf(stderr, "Unexpected %s size. Expected %u, but is %lu.\n", "Int16", 2, sizeof(Int16));
    }

    if(sizeof(Int32) != 4) {
        result = false;
        fprintf(stderr, "Unexpected %s size. Expected %u, but is %lu.\n", "Int32", 4, sizeof(Int32));
    }

    if(sizeof(Int64) != 8) {
        result = false;
        fprintf(stderr, "Unexpected %s size. Expected %u, but is %lu.\n", "Int64", 8, sizeof(Int64));
    }

    if(sizeof(UInt8) != 1) {
        result = false;
        fprintf(stderr, "Unexpected %s size. Expected %u, but is %lu.\n", "Int8", 1, sizeof(UInt8));
    }

    if(sizeof(UInt16) != 2) {
        result = false;
        fprintf(stderr, "Unexpected %s size. Expected %u, but is %lu.\n", "UInt16", 2, sizeof(UInt16));
    }

    if(sizeof(UInt32) != 4) {
        result = false;
        fprintf(stderr, "Unexpected %s size. Expected %u, but is %lu.\n", "UInt32", 4, sizeof(UInt32));
    }

    if(sizeof(UInt64) != 8) {
        result = false;
        fprintf(stderr, "Unexpected %s size. Expected %u, but is %lu.\n", "UInt64", 8, sizeof(UInt64));
    }

    if(sizeof(Float32) != 4) {
        result = false;
        fprintf(stderr, "Unexpected %s size. Expected %u, but is %lu.\n", "Float32", 4, sizeof(Float32));
    }

    if(sizeof(Float64) != 8) {
        result = false;
        fprintf(stderr, "Unexpected %s size. Expected %u, but is %lu.\n", "Float64", 8, sizeof(Float64));
    }

    if(sizeof(Bool8) != 1) {
        result = false;
        fprintf(stderr, "Unexpected %s size. Expected %u, but is %lu.\n", "Bool", 1, sizeof(Bool8));
    }

    if(sizeof(Char8) != 1) {
        result = false;
        fprintf(stderr, "Unexpected %s size. Expected %u, but is %lu.\n", "Char", 1, sizeof(Char8));
    }

    UInt32 endianityCheck = 1;
    UInt8 endianityCheckResult = *((UInt8*)&endianityCheck);
    if(endianityCheckResult != 1) {
        result = false;
        fprintf(stderr, "Unexpected endianity. Expected little endian, but is big endian.\n");
    }

    return result;
}
