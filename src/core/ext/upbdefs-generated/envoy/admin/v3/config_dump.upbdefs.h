/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/admin/v3/config_dump.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_ADMIN_V3_CONFIG_DUMP_PROTO_UPBDEFS_H_
#define ENVOY_ADMIN_V3_CONFIG_DUMP_PROTO_UPBDEFS_H_

#include "upb/def.h"
#include "upb/port_def.inc"
#ifdef __cplusplus
extern "C" {
#endif

#include "upb/def.h"

#include "upb/port_def.inc"

extern _upb_DefPool_Init envoy_admin_v3_config_dump_proto_upbdefinit;

UPB_INLINE const upb_MessageDef *envoy_admin_v3_ConfigDump_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.ConfigDump");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_UpdateFailureState_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.UpdateFailureState");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_BootstrapConfigDump_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.BootstrapConfigDump");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_ListenersConfigDump_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.ListenersConfigDump");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_ListenersConfigDump_StaticListener_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.ListenersConfigDump.StaticListener");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_ListenersConfigDump_DynamicListenerState_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.ListenersConfigDump.DynamicListenerState");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_ListenersConfigDump_DynamicListener_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.ListenersConfigDump.DynamicListener");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_ClustersConfigDump_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.ClustersConfigDump");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_ClustersConfigDump_StaticCluster_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.ClustersConfigDump.StaticCluster");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_ClustersConfigDump_DynamicCluster_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.ClustersConfigDump.DynamicCluster");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_RoutesConfigDump_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.RoutesConfigDump");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_RoutesConfigDump_StaticRouteConfig_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.RoutesConfigDump.StaticRouteConfig");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_RoutesConfigDump_DynamicRouteConfig_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.RoutesConfigDump.DynamicRouteConfig");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_ScopedRoutesConfigDump_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.ScopedRoutesConfigDump");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_ScopedRoutesConfigDump_InlineScopedRouteConfigs_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.ScopedRoutesConfigDump.InlineScopedRouteConfigs");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_ScopedRoutesConfigDump_DynamicScopedRouteConfigs_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.ScopedRoutesConfigDump.DynamicScopedRouteConfigs");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_SecretsConfigDump_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.SecretsConfigDump");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_SecretsConfigDump_DynamicSecret_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.SecretsConfigDump.DynamicSecret");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_SecretsConfigDump_StaticSecret_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.SecretsConfigDump.StaticSecret");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_EndpointsConfigDump_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.EndpointsConfigDump");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_EndpointsConfigDump_StaticEndpointConfig_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.EndpointsConfigDump.StaticEndpointConfig");
}

UPB_INLINE const upb_MessageDef *envoy_admin_v3_EndpointsConfigDump_DynamicEndpointConfig_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_admin_v3_config_dump_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.admin.v3.EndpointsConfigDump.DynamicEndpointConfig");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_ADMIN_V3_CONFIG_DUMP_PROTO_UPBDEFS_H_ */
