/* soapStub.h
   Generated by gSOAP 2.8.63 for xml-rpc.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "xml-rpc-iters.h"      /* deferred for inclusion by C++ compiler */

#ifndef soapStub_H
#define soapStub_H
#include "stdsoap2.h"
#if GSOAP_VERSION != 20863
# error "GSOAP VERSION 20863 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes, Structs and Unions                                                *
 *                                                                            *
\******************************************************************************/

struct _base64;	/* xml-rpc.h:105 */
struct _struct;	/* xml-rpc.h:124 */
struct data;	/* xml-rpc.h:152 */
struct _array;	/* xml-rpc.h:161 */
struct value;	/* xml-rpc.h:41 */
struct member;	/* xml-rpc.h:146 */
struct params;	/* xml-rpc.h:299 */
struct param;	/* xml-rpc.h:317 */
struct methodResponse;	/* xml-rpc.h:331 */
struct methodCall;	/* xml-rpc.h:353 */
struct fault;	/* xml-rpc.h:347 */

/* xml-rpc.h:105 */
#ifndef SOAP_TYPE__base64
#define SOAP_TYPE__base64 (29)
/* base64Binary XSD type: */
struct SOAP_CMAC _base64 {
      public:
        _base64();
        _base64(struct soap *_param_1);
        _base64(struct soap *_param_1, int _param_2, unsigned char *_param_3);
        int size() const;
        unsigned char *ptr();
        void size(int _param_1);
        void ptr(unsigned char *_param_1);
        unsigned char *__ptr;
        int __size;
      public:
        /** Return unique type id SOAP_TYPE__base64 */
        long soap_type() const { return SOAP_TYPE__base64; }
        /** Friend allocator */
        friend SOAP_FMAC1 _base64 * SOAP_FMAC2 soap_instantiate__base64(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* xml-rpc.h:124 */
#ifndef SOAP_TYPE__struct
#define SOAP_TYPE__struct (46)
/* complex XSD type 'struct': */
struct SOAP_CMAC _struct {
      public:
        typedef _struct_iterator iterator;
        typedef _struct_const_iterator const_iterator;
        _struct();
        _struct(const struct _struct &_param_1);
        _struct(struct soap *_param_1);
        _struct(struct soap *_param_1, int _param_2);
        bool empty() const;
        int size() const;
        struct value &operator[](int _param_1) const;
        struct value &operator[](const char *_param_1);
        struct value &operator[](const wchar_t *_param_1);
        const struct value &operator[](const char *_param_1) const;
        const struct value &operator[](const wchar_t *_param_1) const;
        _struct_iterator begin() const;
        _struct_iterator end() const;
        /** Sequence of elements 'member' of XSD type 'member' stored in dynamic array member of length __size */
        int __size;
        struct member *member;
        /** Context that manages this object */
        struct soap *soap;
      public:
        /** Return unique type id SOAP_TYPE__struct */
        long soap_type() const { return SOAP_TYPE__struct; }
        /** Friend allocator */
        friend SOAP_FMAC1 _struct * SOAP_FMAC2 soap_instantiate__struct(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* xml-rpc.h:152 */
#ifndef SOAP_TYPE_data
#define SOAP_TYPE_data (68)
/* complex XSD type 'data': */
struct SOAP_CMAC data {
      public:
        /** Sequence of elements 'value' of XSD type 'value' stored in dynamic array value of length __size */
        int __size;
        struct value *value;
      public:
        /** Return unique type id SOAP_TYPE_data */
        long soap_type() const { return SOAP_TYPE_data; }
        /** Constructor with member initializations */
        data() : __size(), value() { }
        /** Friend allocator */
        friend SOAP_FMAC1 data * SOAP_FMAC2 soap_instantiate_data(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* xml-rpc.h:161 */
#ifndef SOAP_TYPE__array
#define SOAP_TYPE__array (69)
/* complex XSD type 'array': */
struct SOAP_CMAC _array {
      public:
        typedef _array_iterator iterator;
        typedef _array_const_iterator const_iterator;
        _array();
        _array(const struct _array &_param_1);
        _array(struct soap *_param_1);
        _array(struct soap *_param_1, int _param_2);
        bool empty() const;
        int size() const;
        void size(int _param_1);
        struct value &operator[](int _param_1);
        const struct value &operator[](int _param_1) const;
        _array_iterator begin() const;
        _array_iterator end() const;
        /** Required element 'data' of XSD type 'data' */
        struct data data;
        /** Context that manages this object */
        struct soap *soap;
      public:
        /** Return unique type id SOAP_TYPE__array */
        long soap_type() const { return SOAP_TYPE__array; }
        /** Friend allocator */
        friend SOAP_FMAC1 _array * SOAP_FMAC2 soap_instantiate__array(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* xml-rpc.h:41 */
#ifndef SOAP_TYPE_value
#define SOAP_TYPE_value (7)
/* complex XSD type 'value': */
struct SOAP_CMAC value {
      public:
        typedef value_iterator iterator;
        typedef value_const_iterator const_iterator;
        value();
        value(const struct value &_param_1);
        value(struct soap *_param_1);
        value(struct soap *_param_1, bool _param_2);
        value(struct soap *_param_1, int _param_2);
        value(struct soap *_param_1, LONG64 _param_2);
        value(struct soap *_param_1, double _param_2);
        value(struct soap *_param_1, const char *_param_2);
        value(struct soap *_param_1, const std::string &_param_2);
        value(struct soap *_param_1, const wchar_t *_param_2);
        value(struct soap *_param_1, const std::wstring &_param_2);
        value(struct soap *_param_1, ULONG64 _param_2);
        value(struct soap *_param_1, const struct _array &_param_2);
        value(struct soap *_param_1, const struct _struct &_param_2);
        value(struct soap *_param_1, const struct _base64 &_param_2);
        operator bool() const;
        operator int() const;
        operator LONG64() const;
        operator double() const;
        operator char *() const;
        operator std::string() const;
        operator wchar_t *() const;
        operator std::wstring() const;
        operator ULONG64() const;
        operator struct _array &();
        operator const struct _array &() const;
        operator struct _struct &();
        operator const struct _struct &() const;
        operator struct _base64 &();
        operator const struct _base64 &() const;
        struct value &operator[](int _param_1);
        struct value &operator[](const char *_param_1);
        struct value &operator[](const std::string &_param_1);
        struct value &operator[](const wchar_t *_param_1);
        struct value &operator[](const std::wstring &_param_1);
        const struct value &operator[](int _param_1) const;
        const struct value &operator[](const char *_param_1) const;
        const struct value &operator[](const std::string &_param_1) const;
        const struct value &operator[](const wchar_t *_param_1) const;
        const struct value &operator[](const std::wstring &_param_1) const;
        bool operator=(bool _param_1);
        int operator=(int _param_1);
        LONG64 operator=(LONG64 _param_1);
        double operator=(double _param_1);
        ULONG64 operator=(ULONG64 _param_1);
        const char *operator=(const char *_param_1);
        char *operator=(char *_param_1);
        char *operator=(const std::string &_param_1);
        const char *operator=(const wchar_t *_param_1);
        char *operator=(wchar_t *_param_1);
        char *operator=(const std::wstring &_param_1);
        struct _array &operator=(const struct _array &_param_1);
        struct _struct &operator=(const struct _struct &_param_1);
        struct _base64 &operator=(const struct _base64 &_param_1);
        void size(int _param_1);
        int size() const;
        bool empty() const;
        int nth(int _param_1) const;
        int nth(const char *_param_1) const;
        int nth(const wchar_t *_param_1) const;
        bool has(int _param_1) const;
        bool has(const char *_param_1) const;
        bool has(const wchar_t *_param_1) const;
        bool is_null() const;
        bool is_bool() const;
        bool is_false() const;
        bool is_true() const;
        bool is_int() const;
        bool is_double() const;
        bool is_number() const;
        bool is_string() const;
        bool is_dateTime() const;
        bool is_array() const;
        bool is_struct() const;
        bool is_base64() const;
        value_iterator begin();
        value_iterator end();
        /** Any type of element 'ref' assigned to ref with its SOAP_TYPE_T assigned to __type */
        /** Do not create a cyclic data structure throught this member unless SOAP encoding or SOAP_XML_GRAPH are used for id-ref serialization */
        int __type;
        void *ref;
        char *__any;
        /** Context that manages this object */
        struct soap *soap;
      public:
        /** Return unique type id SOAP_TYPE_value */
        long soap_type() const { return SOAP_TYPE_value; }
        /** Friend allocator */
        friend SOAP_FMAC1 value * SOAP_FMAC2 soap_instantiate_value(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* xml-rpc.h:146 */
#ifndef SOAP_TYPE_member
#define SOAP_TYPE_member (66)
/* complex XSD type 'member': */
struct SOAP_CMAC member {
      public:
        /** Optional element 'name' of XSD type 'xsd:string' */
        char *name;
        /** Required element 'value' of XSD type 'value' */
        struct value value;
      public:
        /** Return unique type id SOAP_TYPE_member */
        long soap_type() const { return SOAP_TYPE_member; }
        /** Constructor with member initializations */
        member() : name(), value() { }
        /** Friend allocator */
        friend SOAP_FMAC1 member * SOAP_FMAC2 soap_instantiate_member(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* xml-rpc.h:299 */
#ifndef SOAP_TYPE_params
#define SOAP_TYPE_params (174)
/* complex XSD type 'params': */
struct SOAP_CMAC params {
      public:
        typedef params_iterator iterator;
        typedef params_const_iterator const_iterator;
        params();
        params(struct soap *_param_1);
        params(struct soap *_param_1, int _param_2);
        bool empty() const;
        int size() const;
        struct value &operator[](int _param_1);
        const struct value &operator[](int _param_1) const;
        params_iterator begin() const;
        params_iterator end() const;
        /** Sequence of elements 'param' of XSD type 'param' stored in dynamic array param of length __size */
        int __size;
        struct param *param;
        /** Context that manages this object */
        struct soap *soap;
      public:
        /** Return unique type id SOAP_TYPE_params */
        long soap_type() const { return SOAP_TYPE_params; }
        /** Friend allocator */
        friend SOAP_FMAC1 params * SOAP_FMAC2 soap_instantiate_params(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* xml-rpc.h:317 */
#ifndef SOAP_TYPE_param
#define SOAP_TYPE_param (184)
/* complex XSD type 'param': */
struct SOAP_CMAC param {
      public:
        /** Required element 'value' of XSD type 'value' */
        struct value value;
      public:
        /** Return unique type id SOAP_TYPE_param */
        long soap_type() const { return SOAP_TYPE_param; }
        /** Constructor with member initializations */
        param() : value() { }
        /** Friend allocator */
        friend SOAP_FMAC1 param * SOAP_FMAC2 soap_instantiate_param(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* xml-rpc.h:331 */
#ifndef SOAP_TYPE_methodResponse
#define SOAP_TYPE_methodResponse (186)
/* complex XSD type 'methodResponse': */
struct SOAP_CMAC methodResponse {
      public:
        methodResponse();
        methodResponse(struct soap *_param_1);
        struct value &operator[](int _param_1);
        const struct value &operator[](int _param_1) const;
        struct value &get_fault(void);
        struct value &set_fault(const char *_param_1);
        struct value &set_fault(struct value &_param_1);
        int recv();
        int send();
        /** Optional element 'params' of XSD type 'params' */
        struct params *params;
        /** Optional element 'fault' of XSD type 'fault' */
        struct fault *fault;
        /** Context that manages this object */
        struct soap *soap;
      public:
        /** Return unique type id SOAP_TYPE_methodResponse */
        long soap_type() const { return SOAP_TYPE_methodResponse; }
        /** Friend allocator */
        friend SOAP_FMAC1 methodResponse * SOAP_FMAC2 soap_instantiate_methodResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* xml-rpc.h:353 */
#ifndef SOAP_TYPE_methodCall
#define SOAP_TYPE_methodCall (199)
/* complex XSD type 'methodCall': */
struct SOAP_CMAC methodCall {
      private:
        /** Not serialized */
        char *methodEndpoint;
        /** Not serialized */
        struct methodResponse *methodResponse;
      public:
        methodCall();
        methodCall(struct soap *_param_1);
        methodCall(struct soap *_param_1, const char *endpoint, const char *methodname);
        struct value &operator[](int _param_1);
        const struct value &operator[](int _param_1) const;
        struct params &operator()();
        struct params &operator()(const struct params &_param_1);
        struct params &response();
        struct value &fault();
        const char *name() const;
        int error() const;
        int recv();
        int send();
        /** Optional element 'methodName' of XSD type 'xsd:string' */
        char *methodName;
        /** Required element 'params' of XSD type 'params' */
        struct params params;
        /** Context that manages this object */
        struct soap *soap;
      public:
        /** Return unique type id SOAP_TYPE_methodCall */
        long soap_type() const { return SOAP_TYPE_methodCall; }
        /** Friend allocator */
        friend SOAP_FMAC1 methodCall * SOAP_FMAC2 soap_instantiate_methodCall(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* xml-rpc.h:347 */
#ifndef SOAP_TYPE_fault
#define SOAP_TYPE_fault (197)
/* complex XSD type 'fault': */
struct SOAP_CMAC fault {
      public:
        /** Required element 'value' of XSD type 'value' */
        struct value value;
      public:
        /** Return unique type id SOAP_TYPE_fault */
        long soap_type() const { return SOAP_TYPE_fault; }
        /** Constructor with member initializations */
        fault() : value() { }
        /** Friend allocator */
        friend SOAP_FMAC1 fault * SOAP_FMAC2 soap_instantiate_fault(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* xml-rpc.h:502 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (255)
/* SOAP_ENV__Header: */
struct SOAP_CMAC SOAP_ENV__Header {
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Header */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Header; }
        /** Constructor with member initializations */
        SOAP_ENV__Header() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Header * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Header(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* xml-rpc.h:502 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (256)
/* Type SOAP_ENV__Code is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* SOAP_ENV__Code: */
struct SOAP_CMAC SOAP_ENV__Code {
      public:
        /** Optional element 'SOAP-ENV:Value' of XSD type 'xsd:QName' */
        char *SOAP_ENV__Value;
        /** Optional element 'SOAP-ENV:Subcode' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Subcode;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Code */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Code; }
        /** Constructor with member initializations */
        SOAP_ENV__Code() : SOAP_ENV__Value(), SOAP_ENV__Subcode() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Code * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Code(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* xml-rpc.h:502 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (258)
/* SOAP_ENV__Detail: */
struct SOAP_CMAC SOAP_ENV__Detail {
      public:
        char *__any;
        /** Any type of element 'fault' assigned to fault with its SOAP_TYPE_T assigned to __type */
        /** Do not create a cyclic data structure throught this member unless SOAP encoding or SOAP_XML_GRAPH are used for id-ref serialization */
        int __type;
        void *fault;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Detail */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Detail; }
        /** Constructor with member initializations */
        SOAP_ENV__Detail() : __any(), __type(), fault() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Detail * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Detail(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* xml-rpc.h:502 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (259)
/* SOAP_ENV__Reason: */
struct SOAP_CMAC SOAP_ENV__Reason {
      public:
        /** Optional element 'SOAP-ENV:Text' of XSD type 'xsd:string' */
        char *SOAP_ENV__Text;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Reason */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Reason; }
        /** Constructor with member initializations */
        SOAP_ENV__Reason() : SOAP_ENV__Text() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Reason * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Reason(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* xml-rpc.h:502 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (260)
/* SOAP_ENV__Fault: */
struct SOAP_CMAC SOAP_ENV__Fault {
      public:
        /** Optional element 'faultcode' of XSD type 'xsd:QName' */
        char *faultcode;
        /** Optional element 'faultstring' of XSD type 'xsd:string' */
        char *faultstring;
        /** Optional element 'faultactor' of XSD type 'xsd:string' */
        char *faultactor;
        /** Optional element 'detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *detail;
        /** Optional element 'SOAP-ENV:Code' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Code;
        /** Optional element 'SOAP-ENV:Reason' of XSD type 'SOAP-ENV:Reason' */
        struct SOAP_ENV__Reason *SOAP_ENV__Reason;
        /** Optional element 'SOAP-ENV:Node' of XSD type 'xsd:string' */
        char *SOAP_ENV__Node;
        /** Optional element 'SOAP-ENV:Role' of XSD type 'xsd:string' */
        char *SOAP_ENV__Role;
        /** Optional element 'SOAP-ENV:Detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *SOAP_ENV__Detail;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Fault */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Fault; }
        /** Constructor with member initializations */
        SOAP_ENV__Fault() : faultcode(), faultstring(), faultactor(), detail(), SOAP_ENV__Code(), SOAP_ENV__Reason(), SOAP_ENV__Node(), SOAP_ENV__Role(), SOAP_ENV__Detail() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Fault * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Fault(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/


/* (built-in):0 */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
typedef char *_XML;
#endif

/* (built-in):0 */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
typedef char *_QName;
#endif

/* xml-rpc.h:86 */
#ifndef SOAP_TYPE__boolean
#define SOAP_TYPE__boolean (21)
typedef char _boolean;
#endif

/* xml-rpc.h:89 */
#ifndef SOAP_TYPE__double
#define SOAP_TYPE__double (23)
typedef double _double;
#endif

/* xml-rpc.h:92 */
#ifndef SOAP_TYPE__i4
#define SOAP_TYPE__i4 (24)
typedef int _i4;
#endif

/* xml-rpc.h:95 */
#ifndef SOAP_TYPE__int
#define SOAP_TYPE__int (26)
typedef LONG64 _int;
#endif

/* xml-rpc.h:98 */
#ifndef SOAP_TYPE__string
#define SOAP_TYPE__string (27)
typedef char *_string;
#endif

/* xml-rpc.h:101 */
#ifndef SOAP_TYPE__dateTime_DOTiso8601
#define SOAP_TYPE__dateTime_DOTiso8601 (28)
typedef char *_dateTime_DOTiso8601;
#endif

/******************************************************************************\
 *                                                                            *
 * Serializable Types                                                         *
 *                                                                            *
\******************************************************************************/


/* _boolean has binding name '_boolean' for type '' */
#ifndef SOAP_TYPE__boolean
#define SOAP_TYPE__boolean (21)
#endif

/* char has binding name 'byte' for type 'xsd:byte' */
#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (3)
#endif

/* _i4 has binding name '_i4' for type '' */
#ifndef SOAP_TYPE__i4
#define SOAP_TYPE__i4 (24)
#endif

/* int has binding name 'int' for type 'xsd:int' */
#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif

/* _int has binding name '_int' for type '' */
#ifndef SOAP_TYPE__int
#define SOAP_TYPE__int (26)
#endif

/* LONG64 has binding name 'LONG64' for type 'xsd:long' */
#ifndef SOAP_TYPE_LONG64
#define SOAP_TYPE_LONG64 (25)
#endif

/* _double has binding name '_double' for type '' */
#ifndef SOAP_TYPE__double
#define SOAP_TYPE__double (23)
#endif

/* double has binding name 'double' for type 'xsd:double' */
#ifndef SOAP_TYPE_double
#define SOAP_TYPE_double (22)
#endif

/* unsigned char has binding name 'unsignedByte' for type 'xsd:unsignedByte' */
#ifndef SOAP_TYPE_unsignedByte
#define SOAP_TYPE_unsignedByte (40)
#endif

/* unsigned int has binding name 'unsignedInt' for type 'xsd:unsignedInt' */
#ifndef SOAP_TYPE_unsignedInt
#define SOAP_TYPE_unsignedInt (39)
#endif

/* ULONG64 has binding name 'ULONG64' for type 'xsd:unsignedLong' */
#ifndef SOAP_TYPE_ULONG64
#define SOAP_TYPE_ULONG64 (114)
#endif

/* std::wstring has binding name 'std__wstring' for type 'xsd:string' */
#ifndef SOAP_TYPE_std__wstring
#define SOAP_TYPE_std__wstring (95)
#endif

/* std::string has binding name 'std__string' for type 'xsd:string' */
#ifndef SOAP_TYPE_std__string
#define SOAP_TYPE_std__string (91)
#endif

/* struct SOAP_ENV__Fault has binding name 'SOAP_ENV__Fault' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (260)
#endif

/* struct SOAP_ENV__Reason has binding name 'SOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (259)
#endif

/* struct SOAP_ENV__Detail has binding name 'SOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (258)
#endif

/* struct SOAP_ENV__Code has binding name 'SOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (256)
#endif

/* struct SOAP_ENV__Header has binding name 'SOAP_ENV__Header' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (255)
#endif

/* struct methodCall has binding name 'methodCall' for type 'methodCall' */
#ifndef SOAP_TYPE_methodCall
#define SOAP_TYPE_methodCall (199)
#endif

/* struct fault has binding name 'fault' for type 'fault' */
#ifndef SOAP_TYPE_fault
#define SOAP_TYPE_fault (197)
#endif

/* struct methodResponse has binding name 'methodResponse' for type 'methodResponse' */
#ifndef SOAP_TYPE_methodResponse
#define SOAP_TYPE_methodResponse (186)
#endif

/* struct param has binding name 'param' for type 'param' */
#ifndef SOAP_TYPE_param
#define SOAP_TYPE_param (184)
#endif

/* struct params has binding name 'params' for type 'params' */
#ifndef SOAP_TYPE_params
#define SOAP_TYPE_params (174)
#endif

/* struct _array has binding name '_array' for type '' */
#ifndef SOAP_TYPE__array
#define SOAP_TYPE__array (69)
#endif

/* struct data has binding name 'data' for type 'data' */
#ifndef SOAP_TYPE_data
#define SOAP_TYPE_data (68)
#endif

/* struct member has binding name 'member' for type 'member' */
#ifndef SOAP_TYPE_member
#define SOAP_TYPE_member (66)
#endif

/* struct _struct has binding name '_struct' for type '' */
#ifndef SOAP_TYPE__struct
#define SOAP_TYPE__struct (46)
#endif

/* struct _base64 has binding name '_base64' for type '' */
#ifndef SOAP_TYPE__base64
#define SOAP_TYPE__base64 (29)
#endif

/* struct value has binding name 'value' for type 'value' */
#ifndef SOAP_TYPE_value
#define SOAP_TYPE_value (7)
#endif

/* struct SOAP_ENV__Reason * has binding name 'PointerToSOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (262)
#endif

/* struct SOAP_ENV__Detail * has binding name 'PointerToSOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (261)
#endif

/* struct SOAP_ENV__Code * has binding name 'PointerToSOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (257)
#endif

/* struct _base64 * has binding name 'PointerTo_base64' for type '' */
#ifndef SOAP_TYPE_PointerTo_base64
#define SOAP_TYPE_PointerTo_base64 (226)
#endif

/* double * has binding name 'PointerTo_double' for type '' */
#ifndef SOAP_TYPE_PointerTo_double
#define SOAP_TYPE_PointerTo_double (220)
#endif

/* LONG64 * has binding name 'PointerTo_int' for type '' */
#ifndef SOAP_TYPE_PointerTo_int
#define SOAP_TYPE_PointerTo_int (218)
#endif

/* char * has binding name 'PointerTo_boolean' for type '' */
#ifndef SOAP_TYPE_PointerTo_boolean
#define SOAP_TYPE_PointerTo_boolean (216)
#endif

/* struct methodResponse * has binding name 'PointerTomethodResponse' for type 'methodResponse' */
#ifndef SOAP_TYPE_PointerTomethodResponse
#define SOAP_TYPE_PointerTomethodResponse (200)
#endif

/* struct fault * has binding name 'PointerTofault' for type 'fault' */
#ifndef SOAP_TYPE_PointerTofault
#define SOAP_TYPE_PointerTofault (198)
#endif

/* struct params * has binding name 'PointerToparams' for type 'params' */
#ifndef SOAP_TYPE_PointerToparams
#define SOAP_TYPE_PointerToparams (196)
#endif

/* struct param * has binding name 'PointerToparam' for type 'param' */
#ifndef SOAP_TYPE_PointerToparam
#define SOAP_TYPE_PointerToparam (185)
#endif

/* wchar_t * has binding name 'wstring' for type 'xsd:string' */
#ifndef SOAP_TYPE_wstring
#define SOAP_TYPE_wstring (111)
#endif

/* struct member * has binding name 'PointerTomember' for type 'member' */
#ifndef SOAP_TYPE_PointerTomember
#define SOAP_TYPE_PointerTomember (67)
#endif

/* unsigned char * has binding name 'PointerTounsignedByte' for type 'xsd:unsignedByte' */
#ifndef SOAP_TYPE_PointerTounsignedByte
#define SOAP_TYPE_PointerTounsignedByte (41)
#endif

/* _dateTime_DOTiso8601 has binding name '_dateTime_DOTiso8601' for type '' */
#ifndef SOAP_TYPE__dateTime_DOTiso8601
#define SOAP_TYPE__dateTime_DOTiso8601 (28)
#endif

/* _string has binding name '_string' for type '' */
#ifndef SOAP_TYPE__string
#define SOAP_TYPE__string (27)
#endif

/* struct value * has binding name 'PointerTovalue' for type 'value' */
#ifndef SOAP_TYPE_PointerTovalue
#define SOAP_TYPE_PointerTovalue (9)
#endif

/* _QName has binding name '_QName' for type 'xsd:QName' */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
#endif

/* _XML has binding name '_XML' for type '' */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
#endif

/* char * has binding name 'string' for type 'xsd:string' */
#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (4)
#endif

/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


/* xml-rpc.h:41 */
extern struct value *new_value(struct soap *soap);

/* xml-rpc.h:44 */
extern struct value *init_value(struct soap *soap, struct value *v);

/* xml-rpc.h:399 */
extern char *bool_of(struct value *v);

/* xml-rpc.h:402 */
extern LONG64 *int_of(struct value *v);

/* xml-rpc.h:405 */
extern double *double_of(struct value *v);

/* xml-rpc.h:408 */
extern const char **string_of(struct value *v);

/* xml-rpc.h:411 */
extern const char **dateTime_of(struct value *v);

/* xml-rpc.h:414 */
extern struct _base64 *base64_of(struct value *v);

/* xml-rpc.h:417 */
extern struct value *value_at(struct value *v, const char *s);

/* xml-rpc.h:420 */
extern struct value *value_atw(struct value *v, const wchar_t *s);

/* xml-rpc.h:423 */
extern int nth_at(const struct value *v, const char *s);

/* xml-rpc.h:426 */
extern int nth_atw(const struct value *v, const wchar_t *s);

/* xml-rpc.h:429 */
extern int nth_nth(const struct value *v, int n);

/* xml-rpc.h:432 */
extern struct member *nth_member(struct value *v, int n);

/* xml-rpc.h:435 */
extern struct value *nth_value(struct value *v, int n);

/* xml-rpc.h:438 */
extern char is_null(const struct value *v);

/* xml-rpc.h:441 */
extern char is_int(const struct value *v);

/* xml-rpc.h:444 */
extern char is_double(const struct value *v);

/* xml-rpc.h:447 */
extern char is_number(const struct value *v);

/* xml-rpc.h:450 */
extern char is_string(const struct value *v);

/* xml-rpc.h:453 */
extern char is_bool(const struct value *v);

/* xml-rpc.h:456 */
extern char is_true(const struct value *v);

/* xml-rpc.h:459 */
extern char is_false(const struct value *v);

/* xml-rpc.h:462 */
extern char is_array(const struct value *v);

/* xml-rpc.h:465 */
extern char is_struct(const struct value *v);

/* xml-rpc.h:468 */
extern char is_dateTime(const struct value *v);

/* xml-rpc.h:471 */
extern char is_base64(const struct value *v);

/* xml-rpc.h:474 */
extern void set_struct(struct value *v);

/* xml-rpc.h:477 */
extern void set_size(struct value *v, int n);

/* xml-rpc.h:480 */
extern int has_size(const struct value *v);

/* xml-rpc.h:483 */
extern int is_empty(const struct value *v);

/* xml-rpc.h:492 */
extern struct params *new_params(struct soap *soap);

/* xml-rpc.h:495 */
extern struct params *init_params(struct soap *soap, struct params *p);

/* xml-rpc.h:498 */
extern struct value *nth_param(struct params *p, int n);

/* xml-rpc.h:501 */
extern int call_method(struct soap *soap, const char *endpoint, const char *methodName, struct params *p, struct methodResponse *r);

#endif

/* End of soapStub.h */
