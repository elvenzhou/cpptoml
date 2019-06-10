#include <cstdint>
#include <iostream>
#include "include/cpptoml.h"

int create_convert()
{
    auto root = cpptoml::make_table();

    root->insert("small-integer", int64_t{12});

    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));

    try
    {
        root->insert("too-big", std::numeric_limits<uint64_t>::max());
    }
    catch (std::overflow_error&)
    {
    }

    root->insert("medium-integer", std::numeric_limits<int32_t>::max());

    try
    {
        root->get_as<int16_t>("medium-integer");
    }
    catch (std::overflow_error&)
    {
    }

    auto int_array = cpptoml::make_array();
    int_array->push_back(1L);
    int_array->push_back(2L);
    int_array->push_back(3L);
    int_array->push_back(4L);
    int_array->push_back(5L);
    int_array->push_back(6L);

    try
    {
        root->insert("too-big", std::numeric_limits<uint64_t>::max());
    }
    catch (std::overflow_error&)
    {
    }

    root->insert("small-integer", int64_t{12});

    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));

    try
    {
        root->insert("too-big", std::numeric_limits<uint64_t>::max());
    }
    catch (std::overflow_error&)
    {
    }

    root->insert("medium-integer", std::numeric_limits<int32_t>::max());

    try
    {
        root->get_as<int16_t>("medium-integer");
    }
    catch (std::overflow_error&)
    {
    }

    int_array->push_back(7L);
    int_array->push_back(8L);
    int_array->push_back(9L);
    int_array->push_back(10L);
    int_array->push_back(1L);
    int_array->push_back(2L);
    int_array->push_back(3L);


    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));

    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));
    int_array->push_back(7L);
    int_array->push_back(8L);
    int_array->push_back(9L);
    int_array->push_back(10L);
    int_array->push_back(1L);
    int_array->push_back(2L);
    int_array->push_back(3L);
    int_array->push_back(7L);
    int_array->push_back(8L);
    int_array->push_back(9L);
    int_array->push_back(10L);
    int_array->push_back(1L);
    int_array->push_back(2L);
    int_array->push_back(3L);
    try
    {
        root->insert("too-big", std::numeric_limits<uint64_t>::max());
    }
    catch (std::overflow_error&)
    {
    }

    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));

    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));

    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));

    int_array->push_back(4L);
    int_array->push_back(5L);
    int_array->push_back(6L);

    try
    {
        root->insert("too-big", std::numeric_limits<uint64_t>::max());
    }
    catch (std::overflow_error&)
    {
    }
    int_array->push_back(7L);
    int_array->push_back(8L);
    int_array->push_back(9L);
    int_array->push_back(10L);
    int_array->push_back(1L);
    int_array->push_back(2L);
    int_array->push_back(3L);
    int_array->push_back(4L);
    int_array->push_back(5L);


    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);

    try
    {
        root->insert("too-big", std::numeric_limits<uint64_t>::max());
    }
    catch (std::overflow_error&)
    {
    }
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));


    int_array->push_back(6L);
    int_array->push_back(7L);
    int_array->push_back(8L);
    int_array->push_back(9L);
    int_array->push_back(10L);

    try
    {
        root->insert("too-big", std::numeric_limits<uint64_t>::max());
    }
    catch (std::overflow_error&)
    {
    }

    root->get_as<uint32_t>("medium-integer"); // signed as unsigned, checked

    root->insert("medium-negative", std::numeric_limits<int32_t>::min());

    try
    {
        root->get_as<int16_t>("medium-negative");
    }
    catch (std::underflow_error&)
    {
    }


    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);

    try
    {
        root->insert("too-big", std::numeric_limits<uint64_t>::max());
    }
    catch (std::overflow_error&)
    {
    }
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));

    try
    {
        root->get_as<uint64_t>("medium-negative");
    }
    catch (std::underflow_error&)
    {
    }

    root->insert("IntegerArray", int_array);

    root->get_as<int64_t>("medium-negative");

    root->insert("float", 0.1f);
    root->get_as<double>("float");

    auto si = *root->get_as<int8_t>("small-integer");
    root->insert("small-integer2", si);

    auto si1 = *root->get_as<int8_t>("integer");
    root->insert("integer2", si1);

    root->get_as<uint32_t>("medium-integer"); // signed as unsigned, checked

    root->insert("medium-negative", std::numeric_limits<int32_t>::min());


    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));
    auto table = cpptoml::make_table();

    auto table_array = cpptoml::make_table_array();
    table_array->push_back(table);
    table_array->push_back(table);
    table_array->push_back(table);

    root->insert("TableArray", table_array);

    return 0;
}

int create_convert2()
{
    auto root = cpptoml::make_table();

    root->insert("small-integer", int64_t{12});

    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));

    try
    {
        root->insert("too-big", std::numeric_limits<uint64_t>::max());
    }
    catch (std::overflow_error&)
    {
    }

    root->insert("medium-integer", std::numeric_limits<int32_t>::max());

    try
    {
        root->get_as<int16_t>("medium-integer");
    }
    catch (std::overflow_error&)
    {
    }

    auto int_array = cpptoml::make_array();
    int_array->push_back(1L);
    int_array->push_back(2L);
    int_array->push_back(3L);
    int_array->push_back(4L);
    int_array->push_back(5L);
    int_array->push_back(6L);

    try
    {
        root->insert("too-big", std::numeric_limits<uint64_t>::max());
    }
    catch (std::overflow_error&)
    {
    }

    int_array->push_back(7L);
    int_array->push_back(8L);
    int_array->push_back(9L);
    int_array->push_back(10L);
    int_array->push_back(1L);
    int_array->push_back(2L);
    int_array->push_back(3L);


    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));

    try
    {
        root->insert("too-big", std::numeric_limits<uint64_t>::max());
    }
    catch (std::overflow_error&)
    {
    }

    root->insert("medium-integer", std::numeric_limits<int32_t>::max());

    try
    {
        root->get_as<int16_t>("medium-integer");
    }
    catch (std::overflow_error&)
    {
    }

    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));

    try
    {
        root->insert("too-big", std::numeric_limits<uint64_t>::max());
    }
    catch (std::overflow_error&)
    {
    }

    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));

    int_array->push_back(4L);
    int_array->push_back(5L);
    int_array->push_back(6L);

    try
    {
        root->insert("too-big", std::numeric_limits<uint64_t>::max());
    }
    catch (std::overflow_error&)
    {
    }
    int_array->push_back(7L);
    int_array->push_back(8L);
    int_array->push_back(9L);
    int_array->push_back(10L);
    int_array->push_back(1L);
    int_array->push_back(2L);
    int_array->push_back(3L);
    int_array->push_back(4L);
    int_array->push_back(5L);


    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);

    try
    {
        root->insert("too-big", std::numeric_limits<uint64_t>::max());
    }
    catch (std::overflow_error&)
    {
    }
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));


    int_array->push_back(6L);
    int_array->push_back(7L);
    int_array->push_back(8L);
    int_array->push_back(9L);
    int_array->push_back(10L);

    try
    {
        root->insert("too-big", std::numeric_limits<uint64_t>::max());
    }
    catch (std::overflow_error&)
    {
    }

    root->get_as<uint32_t>("medium-integer"); // signed as unsigned, checked

    root->insert("medium-negative", std::numeric_limits<int32_t>::min());

    try
    {
        root->get_as<int16_t>("medium-negative");
    }
    catch (std::underflow_error&)
    {
    }


    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);

    try
    {
        root->insert("too-big", std::numeric_limits<uint64_t>::max());
    }
    catch (std::overflow_error&)
    {
    }
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));

    try
    {
        root->get_as<uint64_t>("medium-negative");
    }
    catch (std::underflow_error&)
    {
    }

    root->insert("IntegerArray", int_array);

    root->get_as<int64_t>("medium-negative");

    root->insert("float", 0.1f);
    root->get_as<double>("float");

    auto si = *root->get_as<int8_t>("small-integer");
    root->insert("small-integer2", si);

    auto si1 = *root->get_as<int8_t>("integer");
    root->insert("integer2", si1);



    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));
    auto table = cpptoml::make_table();

    auto table_array = cpptoml::make_table_array();
    table_array->push_back(table);
    table_array->push_back(table);
    table_array->push_back(table);

    root->insert("TableArray", table_array);

    return 0;
}

int create_read_convert()
{
    std::shared_ptr<cpptoml::table> root = cpptoml::make_table();
    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));

    auto table = cpptoml::make_table();
    table->insert("ElementOne", 1L);
    table->insert("ElementTwo", 2.0);
    table->insert("ElementThree", std::string("THREE"));

    auto nested_table = cpptoml::make_table();
    nested_table->insert("ElementOne", 2L);
    nested_table->insert("ElementTwo", 3.0);
    nested_table->insert("ElementThree", std::string("FOUR"));

    table->insert("Nested", nested_table);

    root->insert("Table", table);

    auto int_array = cpptoml::make_array();
    int_array->push_back(1L);
    int_array->push_back(2L);
    int_array->push_back(3L);
    int_array->push_back(4L);
    int_array->push_back(5L);
    int_array->push_back(6L);
    int_array->push_back(7L);
    int_array->push_back(8L);
    int_array->push_back(9L);
    int_array->push_back(10L);
    int_array->push_back(10L);

    root->insert("IntegerArray", int_array);

    auto double_array = cpptoml::make_array();
    double_array->push_back(1.1);
    double_array->push_back(2.2);
    double_array->push_back(3.3);
    double_array->push_back(4.4);
    double_array->push_back(5.5);

    root->insert("DoubleArray", double_array);

    auto string_array = cpptoml::make_array();
    string_array->push_back(std::string("A"));
    string_array->push_back(std::string("B"));
    string_array->push_back(std::string("C"));
    string_array->push_back(std::string("D"));
    string_array->push_back(std::string("E"));

    root->insert("StringArray", string_array);

    auto table_array = cpptoml::make_table_array();
    table_array->push_back(table);
    table_array->push_back(table);
    table_array->push_back(table);

    root->insert("TableArray", table_array);

    auto array_of_arrays = cpptoml::make_array();
    array_of_arrays->push_back(int_array);
    array_of_arrays->push_back(double_array);
    array_of_arrays->push_back(string_array);

    root->insert("ArrayOfArrays", array_of_arrays);

    //std:://cout << (*root);
    return 0;
}

int read_convert1()
{
    std::shared_ptr<cpptoml::table> root = cpptoml::make_table();
    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));

    auto table = cpptoml::make_table();
    table->insert("ElementOne", 1L);
    table->insert("ElementTwo", 2.0);
    table->insert("ElementThree", std::string("THREE"));

    auto nested_table = cpptoml::make_table();
    nested_table->insert("ElementOne", 2L);
    nested_table->insert("ElementTwo", 3.0);
    nested_table->insert("ElementThree", std::string("FOUR"));

    table->insert("Nested", nested_table);

    root->insert("Table", table);

    auto int_array = cpptoml::make_array();
    int_array->push_back(1L);
    int_array->push_back(2L);
    int_array->push_back(3L);
    int_array->push_back(4L);
    int_array->push_back(5L);
    int_array->push_back(6L);
    int_array->push_back(7L);
    int_array->push_back(8L);
    int_array->push_back(9L);
    int_array->push_back(10L);
    int_array->push_back(10L);

    root->insert("IntegerArray", int_array);

    auto double_array = cpptoml::make_array();
    double_array->push_back(1.1);
    double_array->push_back(2.2);
    double_array->push_back(3.3);
    double_array->push_back(4.4);
    double_array->push_back(5.5);

    root->insert("DoubleArray", double_array);

    auto string_array = cpptoml::make_array();
    string_array->push_back(std::string("A"));
    string_array->push_back(std::string("B"));
    string_array->push_back(std::string("C"));
    string_array->push_back(std::string("D"));
    string_array->push_back(std::string("E"));

    root->insert("StringArray", string_array);

    auto table_array = cpptoml::make_table_array();
    table_array->push_back(table);
    table_array->push_back(table);
    table_array->push_back(table);

    root->insert("TableArray", table_array);

    auto array_of_arrays = cpptoml::make_array();
    array_of_arrays->push_back(int_array);
    array_of_arrays->push_back(double_array);
    array_of_arrays->push_back(string_array);

    root->insert("ArrayOfArrays", array_of_arrays);

   // std:://cout << (*root);
    return 0;
}

int read_convert2()
{
    std::shared_ptr<cpptoml::table> root = cpptoml::make_table();
    root->insert("Integer", 1234L);
    root->insert("Double", 1.234);
    root->insert("String", std::string("ABCD"));
    root->insert("Inte", 124);
    root->insert("Double", 1.2);
    root->insert("String", std::string("ABCDEF"));

    auto table = cpptoml::make_table();
    table->insert("ElementOne", 1L);
    table->insert("ElementTwo", 2.0);
    table->insert("ElementThree", std::string("THREE"));

    auto nested_table = cpptoml::make_table();
    nested_table->insert("ElementOne", 2L);
    nested_table->insert("ElementTwo", 3.0);
    nested_table->insert("ElementThree", std::string("FOUR"));

    table->insert("Nested", nested_table);

    root->insert("Table", table);

    auto int_array = cpptoml::make_array();
    int_array->push_back(1L);
    int_array->push_back(2L);
    int_array->push_back(3L);
    int_array->push_back(4L);
    int_array->push_back(5L);
    int_array->push_back(6L);
    int_array->push_back(7L);
    int_array->push_back(8L);
    int_array->push_back(9L);
    int_array->push_back(10L);
    int_array->push_back(10L);

    root->insert("IntegerArray", int_array);

    auto double_array = cpptoml::make_array();
    double_array->push_back(1.1);
    double_array->push_back(2.2);
    double_array->push_back(3.3);
    double_array->push_back(4.4);
    double_array->push_back(5.5);

    root->insert("DoubleArray", double_array);

    auto string_array = cpptoml::make_array();
    string_array->push_back(std::string("A"));
    string_array->push_back(std::string("B"));
    string_array->push_back(std::string("C"));
    string_array->push_back(std::string("D"));
    string_array->push_back(std::string("E"));

    root->insert("StringArray", string_array);

    auto table_array = cpptoml::make_table_array();
    table_array->push_back(table);
    table_array->push_back(table);
    table_array->push_back(table);

    root->insert("TableArray", table_array);

    auto array_of_arrays = cpptoml::make_array();
    array_of_arrays->push_back(int_array);
    array_of_arrays->push_back(double_array);
    array_of_arrays->push_back(string_array);

    root->insert("ArrayOfArrays", array_of_arrays);

    //std:://cout << (*root);
    return 0;
}

int main(){

    for(int i=0; i<40; i++){
        create_convert();

        for(int j=0; j<8; j++){
            create_read_convert();
            if(i*j/2 ==1){
                read_convert1();
            }else{
                read_convert2();
            }
        }

        if(i/2==1){
            create_convert2();
        }else{
            create_convert();
        }
    }
}