/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/http/v3/cookie.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/type/http/v3/cookie.upb.h"
#include "google/protobuf/duration.upb.h"
#include "udpa/annotations/status.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_type_http_v3_Cookie_submsgs[1] = {
  {.submsg = &google_protobuf_Duration_msginit},
};

static const upb_MiniTable_Field envoy_type_http_v3_Cookie__fields[3] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {2, UPB_SIZE(20, 40), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 24), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_type_http_v3_Cookie_msginit = {
  &envoy_type_http_v3_Cookie_submsgs[0],
  &envoy_type_http_v3_Cookie__fields[0],
  UPB_SIZE(24, 48), 3, upb_ExtMode_NonExtendable, 3, 255, 0,
};

static const upb_MiniTable *messages_layout[1] = {
  &envoy_type_http_v3_Cookie_msginit,
};

const upb_MiniTable_File envoy_type_http_v3_cookie_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  1,
  0,
  0,
};

#include "upb/port_undef.inc"

