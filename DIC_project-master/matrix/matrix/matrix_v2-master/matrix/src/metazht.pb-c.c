/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: metazht.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "metazht.pb-c.h"
void   value__init
                     (Value         *message)
{
  static Value init_value = VALUE__INIT;
  *message = init_value;
}
size_t value__get_packed_size
                     (const Value *message)
{
  assert(message->base.descriptor == &value__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t value__pack
                     (const Value *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &value__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t value__pack_to_buffer
                     (const Value *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &value__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Value *
       value__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Value *)
     protobuf_c_message_unpack (&value__descriptor,
                                allocator, len, data);
}
void   value__free_unpacked
                     (Value *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &value__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor value__field_descriptors[17] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Value, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "indegree",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Value, has_indegree),
    offsetof(Value, indegree),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "parents",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(Value, n_parents),
    offsetof(Value, parents),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "children",
    4,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(Value, n_children),
    offsetof(Value, children),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dataNameList",
    5,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(Value, n_datanamelist),
    offsetof(Value, datanamelist),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dataSize",
    6,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Value, n_datasize),
    offsetof(Value, datasize),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "allDataSize",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Value, has_alldatasize),
    offsetof(Value, alldatasize),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tasklength",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Value, has_tasklength),
    offsetof(Value, tasklength),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "numTaskFin",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Value, has_numtaskfin),
    offsetof(Value, numtaskfin),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "numWorkSteal",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Value, has_numworksteal),
    offsetof(Value, numworksteal),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "numWorkStealFail",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Value, has_numworkstealfail),
    offsetof(Value, numworkstealfail),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "numTaskWait",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Value, has_numtaskwait),
    offsetof(Value, numtaskwait),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "numTaskReady",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Value, has_numtaskready),
    offsetof(Value, numtaskready),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "numCoreAvilable",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Value, has_numcoreavilable),
    offsetof(Value, numcoreavilable),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "numAllCore",
    15,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Value, has_numallcore),
    offsetof(Value, numallcore),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "outputsize",
    16,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Value, has_outputsize),
    offsetof(Value, outputsize),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "submitTime",
    17,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Value, has_submittime),
    offsetof(Value, submittime),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned value__field_indices_by_name[] = {
  6,   /* field[6] = allDataSize */
  3,   /* field[3] = children */
  4,   /* field[4] = dataNameList */
  5,   /* field[5] = dataSize */
  0,   /* field[0] = id */
  1,   /* field[1] = indegree */
  14,   /* field[14] = numAllCore */
  13,   /* field[13] = numCoreAvilable */
  8,   /* field[8] = numTaskFin */
  12,   /* field[12] = numTaskReady */
  11,   /* field[11] = numTaskWait */
  9,   /* field[9] = numWorkSteal */
  10,   /* field[10] = numWorkStealFail */
  15,   /* field[15] = outputsize */
  2,   /* field[2] = parents */
  16,   /* field[16] = submitTime */
  7,   /* field[7] = tasklength */
};
static const ProtobufCIntRange value__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 17 }
};
const ProtobufCMessageDescriptor value__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Value",
  "Value",
  "Value",
  "",
  sizeof(Value),
  17,
  value__field_descriptors,
  value__field_indices_by_name,
  1,  value__number_ranges,
  (ProtobufCMessageInit) value__init,
  NULL,NULL,NULL    /* reserved[123] */
};
