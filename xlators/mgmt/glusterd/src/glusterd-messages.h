/*
  Copyright (c) 2014 Red Hat, Inc. <http://www.redhat.com>
  This file is part of GlusterFS.

  This file is licensed to you under your choice of the GNU Lesser
  General Public License, version 3 or any later version (LGPLv3 or
  later), or the GNU General Public License, version 2 (GPLv2), in all
  cases as published by the Free Software Foundation.
*/

#ifndef _GLUSTERD_MESSAGES_H_
#define _GLUSTERD_MESSAGES_H_

#include <glusterfs/glfs-message-id.h>

/* To add new message IDs, append new identifiers at the end of the list.
 *
 * Never remove a message ID. If it's not used anymore, you can rename it or
 * leave it as it is, but not delete it. This is to prevent reutilization of
 * IDs by other messages.
 *
 * The component name must match one of the entries defined in
 * glfs-message-id.h.
 */

GLFS_MSGID(
    GLUSTERD, GD_MSG_SERVER_QUORUM_NOT_MET,
    GD_MSG_SERVER_QUORUM_LOST_STOPPING_BRICKS,
    GD_MSG_SERVER_QUORUM_MET_STARTING_BRICKS, GD_MSG_PEER_DISCONNECTED,
    GD_MSG_BRICK_DISCONNECTED, GD_MSG_NODE_DISCONNECTED,
    GD_MSG_REBALANCE_DISCONNECTED, GD_MSG_VOL_CLEANUP_FAIL,
    GD_MSG_VOL_VERS_MISMATCH, GD_MSG_CKSUM_VERS_MISMATCH,
    GD_MSG_QUOTA_CONFIG_VERS_MISMATCH, GD_MSG_QUOTA_CONFIG_CKSUM_MISMATCH,
    GD_MSG_BRICK_STOP_FAIL, GD_MSG_SVC_KILL_FAIL, GD_MSG_PID_KILL_FAIL,
    GD_MSG_REBAL_NO_SOCK_FILE, GD_MSG_UNIX_OP_BUILD_FAIL,
    GD_MSG_RPC_CREATE_FAIL, GD_MSG_FAIL_DEFAULT_OPT_SET,
    GD_MSG_CLUSTER_UNLOCK_FAILED, GD_MSG_NO_MEMORY, GD_MSG_UNSUPPORTED_VERSION,
    GD_MSG_COMMAND_NOT_FOUND, GD_MSG_SNAPSHOT_OP_FAILED, GD_MSG_INVALID_ENTRY,
    GD_MSG_VOL_NOT_FOUND, GD_MSG_REG_COMPILE_FAILED, GD_MSG_FILE_OP_FAILED,
    GD_MSG_SNAP_CREATION_FAIL, GD_MSG_VOL_OP_FAILED, GD_MSG_CREATE_DIR_FAILED,
    GD_MSG_DIR_OP_FAILED, GD_MSG_VOL_STOP_FAILED, GD_MSG_NO_CLI_RESP,
    GD_MSG_LOCK_INIT_FAILED, GD_MSG_SNAP_LIST_GET_FAIL, GD_MSG_UNOUNT_FAILED,
    GD_MSG_LOCK_DESTROY_FAILED, GD_MSG_SNAP_CLEANUP_FAIL,
    GD_MSG_SNAP_ACTIVATE_FAIL, GD_MSG_SNAP_DEACTIVATE_FAIL,
    GD_MSG_SNAP_RESTORE_FAIL, GD_MSG_SNAP_REMOVE_FAIL, GD_MSG_SNAP_CONFIG_FAIL,
    GD_MSG_SNAP_STATUS_FAIL, GD_MSG_SNAP_INIT_FAIL, GD_MSG_VOLINFO_SET_FAIL,
    GD_MSG_VOLINFO_GET_FAIL, GD_MSG_BRICK_CREATION_FAIL,
    GD_MSG_BRICK_GET_INFO_FAIL, GD_MSG_BRICK_NEW_INFO_FAIL, GD_MSG_LVS_FAIL,
    GD_MSG_SETXATTR_FAIL, GD_MSG_UMOUNTING_SNAP_BRICK, GD_MSG_OP_UNSUPPORTED,
    GD_MSG_SNAP_NOT_FOUND, GD_MSG_FS_LABEL_UPDATE_FAIL, GD_MSG_LVM_MOUNT_FAILED,
    GD_MSG_DICT_SET_FAILED, GD_MSG_CANONICALIZE_FAIL, GD_MSG_DICT_GET_FAILED,
    GD_MSG_SNAP_INFO_FAIL, GD_MSG_SNAP_VOL_CONFIG_FAIL,
    GD_MSG_SNAP_OBJECT_STORE_FAIL, GD_MSG_DICT_UNSERIALIZE_FAIL,
    GD_MSG_SNAP_RESTORE_REVERT_FAIL, GD_MSG_SNAP_LIST_SET_FAIL,
    GD_MSG_VOLFILE_CREATE_FAIL, GD_MSG_VOLINFO_REMOVE_FAIL,
    GD_MSG_VOL_DELETE_FAIL, GD_MSG_SNAPSHOT_PENDING,
    GD_MSG_BRICK_PATH_UNMOUNTED, GD_MSG_BRICK_ADD_FAIL,
    GD_MSG_BRICK_SET_INFO_FAIL, GD_MSG_LVCREATE_FAIL, GD_MSG_VG_GET_FAIL,
    GD_MSG_TPOOL_GET_FAIL, GD_MSG_LVM_REMOVE_FAILED,
    GD_MSG_MISSEDSNAP_INFO_SET_FAIL, GD_MSG_BRK_MOUNTOPTS_FAIL,
    GD_MSG_MISSED_SNAP_LIST_STORE_FAIL, GD_MSG_INVALID_MISSED_SNAP_ENTRY,
    GD_MSG_MISSED_SNAP_GET_FAIL, GD_MSG_MISSED_SNAP_CREATE_FAIL,
    GD_MSG_DUP_ENTRY, GD_MSG_MISSED_SNAP_STATUS_DONE, GD_MSG_NO_EXEC_PERMS,
    GD_MSG_GLOBAL_OP_VERSION_SET_FAIL, GD_MSG_HARD_LIMIT_SET_FAIL,
    GD_MSG_OP_SUCCESS, GD_MSG_STORE_FAIL, GD_MSG_GLOBAL_OP_VERSION_GET_FAIL,
    GD_MSG_GEOREP_GET_FAILED, GD_MSG_GLUSTERD_UMOUNT_FAIL,
    GD_MSG_QUORUM_CHECK_FAIL, GD_MSG_QUORUM_COUNT_IGNORED,
    GD_MSG_SNAP_MOUNT_FAIL, GD_MSG_RSP_DICT_USE_FAIL, GD_MSG_SNAP_IMPORT_FAIL,
    GD_MSG_SNAP_CONFLICT, GD_MSG_MISSED_SNAP_DELETE,
    GD_MSG_QUOTA_CONFIG_IMPORT_FAIL, GD_MSG_SNAPDIR_CREATE_FAIL,
    GD_MSG_MISSED_SNAP_PRESENT, GD_MSG_UUID_NULL, GD_MSG_TSTAMP_SET_FAIL,
    GD_MSG_RESP_AGGR_FAIL, GD_MSG_DICT_EMPTY, GD_MSG_DICT_CREATE_FAIL,
    GD_MSG_SNAPD_STOP_FAIL, GD_MSG_SOFT_LIMIT_REACHED, GD_MSG_SNAPD_START_FAIL,
    GD_MSG_SNAPD_CREATE_FAIL, GD_MSG_SNAPD_INIT_FAIL, GD_MSG_MGMTV3_OP_FAIL,
    GD_MSG_MGMTV3_PAYLOAD_BUILD_FAIL, GD_MSG_MGMTV3_UNLOCK_FAIL,
    GD_MSG_MGMTV3_LOCK_GET_FAIL, GD_MSG_MGMTV3_LOCKDOWN_FAIL,
    GD_MSG_POST_VALIDATION_FAIL, GD_MSG_PRE_VALIDATION_FAIL,
    GD_MSG_COMMIT_OP_FAIL, GD_MSG_PEER_LIST_CREATE_FAIL, GD_MSG_BRICK_OP_FAIL,
    GD_MSG_OPINFO_SET_FAIL, GD_MSG_OP_EVENT_UNLOCK_FAIL,
    GD_MSG_MGMTV3_OP_RESP_FAIL, GD_MSG_PEER_NOT_FOUND, GD_MSG_REQ_DECODE_FAIL,
    GD_MSG_DICT_SERL_LENGTH_GET_FAIL, GD_MSG_ALREADY_STOPPED,
    GD_MSG_PRE_VALD_RESP_FAIL, GD_MSG_SVC_GET_FAIL, GD_MSG_VOLFILE_NOT_FOUND,
    GD_MSG_OP_EVENT_LOCK_FAIL, GD_MSG_NON_STRIPE_VOL, GD_MSG_SNAPD_OBJ_GET_FAIL,
    GD_MSG_QUOTA_DISABLED, GD_MSG_CACHE_MINMAX_SIZE_INVALID,
    GD_MSG_QUOTA_GET_STAT_FAIL, GD_MSG_SUBVOLUMES_EXCEED, GD_MSG_BRICK_ADD,
    GD_MSG_BRICK_REMOVE, GD_MSG_CREATE_KEY_FAIL,
    GD_MSG_MULTIPLE_LOCK_ACQUIRE_FAIL, GD_MSG_MULTIPLE_LOCK_RELEASE_FAIL,
    GD_MSG_RESP_FROM_UNKNOWN_PEER, GD_MSG_BRICK_MOUNDIRS_AGGR_FAIL,
    GD_MSG_GFID_VALIDATE_SET_FAIL, GD_MSG_PEER_LOCK_FAIL,
    GD_MSG_PEER_UNLOCK_FAIL, GD_MSG_MGMT_OP_FAIL,
    GD_MSG_TRANS_OPINFO_CLEAR_FAIL, GD_MSG_GLUSTERD_LOCK_FAIL,
    GD_MSG_TRANS_OPINFO_SET_FAIL, GD_MSG_TRANS_IDGEN_FAIL, GD_MSG_RPC_FAILURE,
    GD_MSG_OP_VERS_ADJUST_FAIL, GD_MSG_SNAP_DEVICE_NAME_GET_FAIL,
    GD_MSG_SNAP_STATUS_NOT_PENDING, GD_MSG_MGMT_PGM_SET_FAIL,
    GD_MSG_EVENT_INJECT_FAIL, GD_MSG_VERS_INFO, GD_MSG_VOL_INFO_REQ_RECVD,
    GD_MSG_VERS_GET_FAIL, GD_MSG_EVENT_NEW_GET_FAIL, GD_MSG_RPC_LAYER_ERROR,
    GD_MSG_NO_HANDSHAKE_ACK, GD_MSG_OP_VERSION_MISMATCH,
    GD_MSG_HANDSHAKE_REQ_REJECTED, GD_MSG_UNKNOWN_MODE,
    GD_MSG_DEFRAG_STATUS_UPDATED, GD_MSG_NO_FLAG_SET,
    GD_MSG_VERSION_UNSUPPORTED, GD_MSG_UUID_SET_FAIL, GD_MSG_MOUNT_REQ_FAIL,
    GD_MSG_GLUSTERD_GLOBAL_INFO_STORE_FAIL, GD_MSG_OP_VERS_STORE_FAIL,
    GD_MSG_SNAP_AUTOMIC_UPDATE_FAIL, GD_MSG_SNAPINFO_WRITE_FAIL,
    GD_MSG_SNAPINFO_CREATE_FAIL, GD_MSG_SNAPD_INFO_STORE_FAIL,
    GD_MSG_BRK_MNTPATH_MOUNT_FAIL, GD_MSG_BRK_MNTPATH_GET_FAIL,
    GD_MSG_SNAP_BRK_MNT_RECREATE_FAIL, GD_MSG_SNAP_RESOLVE_BRICK_FAIL,
    GD_MSG_RESOLVE_BRICK_FAIL, GD_MSG_BRK_MNT_RECREATE_FAIL,
    GD_MSG_TMP_FILE_UNLINK_FAIL, GD_MSG_VOL_VALS_WRITE_FAIL,
    GD_MSG_STORE_HANDLE_GET_FAIL, GD_MSG_STORE_HANDLE_WRITE_FAIL,
    GD_MSG_MISSED_SNAP_LIST_STORE_HANDLE_GET_FAIL,
    GD_MSG_MISSED_SNAP_LIST_EMPTY, GD_MSG_SNAP_VOL_RETRIEVE_FAIL,
    GD_MSG_SNAPSHOT_UPDATE_FAIL, GD_MSG_SNAPD_PORT_STORE_FAIL,
    GD_MSG_CKSUM_STORE_FAIL, GD_MSG_STORE_HANDLE_CREATE_FAIL,
    GD_MSG_HANDLE_NULL, GD_MSG_VOL_RESTORE_FAIL, GD_MSG_NAME_TOO_LONG,
    GD_MSG_UUID_PARSE_FAIL, GD_MSG_UNKNOWN_KEY, GD_MSG_STORE_ITER_DESTROY_FAIL,
    GD_MSG_STORE_ITER_GET_FAIL, GD_MSG_VOLINFO_UPDATE_FAIL,
    GD_MSG_PARSE_BRICKINFO_FAIL, GD_MSG_VERS_STORE_FAIL, GD_MSG_HEADER_ADD_FAIL,
    GD_MSG_QUOTA_CONF_WRITE_FAIL, GD_MSG_QUOTA_CONF_CORRUPT, GD_MSG_FORK_FAIL,
    GD_MSG_CKSUM_COMPUTE_FAIL, GD_MSG_VERS_CKSUM_STORE_FAIL,
    GD_MSG_GETXATTR_FAIL, GD_MSG_CONVERSION_FAILED, GD_MSG_VOL_NOT_DISTRIBUTE,
    GD_MSG_VOL_STOPPED, GD_MSG_OPCTX_GET_FAIL, GD_MSG_TASKID_GEN_FAIL,
    GD_MSG_REBALANCE_ID_MISSING, GD_MSG_NO_REBALANCE_PFX_IN_VOLNAME,
    GD_MSG_DEFRAG_STATUS_UPDATE_FAIL, GD_MSG_UUID_GEN_STORE_FAIL,
    GD_MSG_UUID_STORE_FAIL, GD_MSG_NO_INIT, GD_MSG_MODULE_NOT_INSTALLED,
    GD_MSG_MODULE_NOT_WORKING, GD_MSG_WRITE_ACCESS_GRANT_FAIL,
    GD_MSG_DIRPATH_TOO_LONG, GD_MSG_LOGGROUP_INVALID, GD_MSG_DIR_PERM_LIBERAL,
    GD_MSG_DIR_PERM_STRICT, GD_MSG_MOUNT_SPEC_INSTALL_FAIL,
    GD_MSG_GLUSTERD_SOCK_LISTENER_START_FAIL, GD_MSG_DIR_NOT_FOUND,
    GD_MSG_FAILED_INIT_SHDSVC, GD_MSG_FAILED_INIT_NFSSVC,
    GD_MSG_FAILED_INIT_QUOTASVC, GD_MSG_RPC_INIT_FAIL,
    GD_MSG_RPCSVC_REG_NOTIFY_RETURNED, GD_MSG_RPC_TRANSPORT_COUNT_GET_FAIL,
    GD_MSG_RPC_LISTENER_CREATE_FAIL, GD_MSG_OP_VERS_RESTORE_FAIL,
    GD_MSG_SELF_HEALD_DISABLED, GD_MSG_PRIV_NULL, GD_MSG_GSYNC_VALIDATION_FAIL,
    GD_MSG_SLAVE_CONFPATH_DETAILS_FETCH_FAIL, GD_MSG_OP_NOT_PERMITTED_AC_REQD,
    GD_MSG_OP_NOT_PERMITTED, GD_MSG_REBALANCE_START_FAIL,
    GD_MSG_NFS_RECONF_FAIL, GD_MSG_REMOVE_BRICK_ID_SET_FAIL,
    GD_MSG_BRICK_MOUNTDIR_GET_FAIL, GD_MSG_BRICK_NOT_FOUND,
    GD_MSG_BRKPATH_TOO_LONG, GD_MSG_CLRLOCKS_CLNT_UMOUNT_FAIL,
    GD_MSG_CLRLOCKS_CLNT_MOUNT_FAIL, GD_MSG_CLRLOCKS_MOUNTDIR_CREATE_FAIL,
    GD_MSG_BRK_PORT_NUM_GET_FAIL, GD_MSG_BRK_STATEDUMP_FAIL,
    GD_MSG_VOL_GRAPH_CHANGE_NOTIFY_FAIL, GD_MSG_INVALID_VG,
    GD_MSG_GLUSTERD_OP_FAILED, GD_MSG_HOSTNAME_ADD_TO_PEERLIST_FAIL,
    GD_MSG_STALE_PEERINFO_REMOVE_FAIL, GD_MSG_TRANS_ID_GET_FAIL,
    GD_MSG_RES_DECODE_FAIL, GD_MSG_VOL_ALREADY_EXIST, GD_MSG_BAD_BRKORDER,
    GD_MSG_BAD_BRKORDER_CHECK_FAIL, GD_MSG_BRICK_SELECT_FAIL,
    GD_MSG_NO_LOCK_RESP_FROM_PEER, GD_MSG_MGMTV3_LOCK_FROM_UUID_REJCT,
    GD_MSG_STAGE_FROM_UUID_REJCT, GD_MSG_UNLOCK_FROM_UUID_REJCT,
    GD_MSG_MGMTV3_UNLOCK_FROM_UUID_REJCT, GD_MSG_COMMIT_FROM_UUID_REJCT,
    GD_MSG_VOL_NOT_STARTED, GD_MSG_VOL_NOT_REPLICA, GD_MSG_VOL_NOT_DISPERSE,
    GD_MSG_OLD_REMOVE_BRICK_EXISTS, GD_MSG_USE_THE_FORCE, GD_MSG_OIP,
    GD_MSG_OIP_RETRY_LATER, GD_MSG_GSYNC_RESTART_FAIL,
    GD_MSG_LOCK_FROM_UUID_REJCT, GD_MSG_BRICK_OP_PAYLOAD_BUILD_FAIL,
    GD_MSG_HOSTNAME_RESOLVE_FAIL, GD_MSG_COUNT_VALIDATE_FAILED,
    GD_MSG_SPAWNING_CHILD_FAILED, GD_MSG_READ_CHILD_DATA_FAILED,
    GD_MSG_DEFAULT_TEMP_CONFIG, GD_MSG_PIDFILE_CREATE_FAILED,
    GD_MSG_GSYNCD_SPAWN_FAILED, GD_MSG_SUBOP_NOT_FOUND, GD_MSG_RESERVED_OPTION,
    GD_MSG_GLUSTERD_PRIV_NOT_FOUND, GD_MSG_SLAVEINFO_FETCH_ERROR,
    GD_MSG_VALIDATE_FAILED, GD_MSG_INVOKE_ERROR, GD_MSG_SESSION_CREATE_ERROR,
    GD_MSG_STOP_FORCE, GD_MSG_GET_CONFIG_INFO_FAILED,
    GD_MSG_STAT_FILE_READ_FAILED, GD_MSG_CONF_PATH_ASSIGN_FAILED,
    GD_MSG_SESSION_INACTIVE, GD_MSG_PIDFILE_NOT_FOUND, GD_MSG_PEER_CMD_ERROR,
    GD_MSG_SRC_FILE_ERROR, GD_MSG_GET_STATEFILE_NAME_FAILED, GD_MSG_STATUS_NULL,
    GD_MSG_STATUSFILE_CREATE_FAILED, GD_MSG_SLAVE_URL_INVALID,
    GD_MSG_INVALID_SLAVE, GD_MSG_READ_ERROR, GD_MSG_ARG_FETCH_ERROR,
    GD_MSG_REG_FILE_MISSING, GD_MSG_STATEFILE_NAME_NOT_FOUND,
    GD_MSG_GEO_REP_START_FAILED, GD_MSG_GSYNCD_ERROR,
    GD_MSG_UPDATE_STATEFILE_FAILED, GD_MSG_STATUS_UPDATE_FAILED,
    GD_MSG_GSYNCD_OP_SET_FAILED, GD_MSG_BUFFER_EMPTY, GD_MSG_CONFIG_INFO,
    GD_MSG_FETCH_CONFIG_VAL_FAILED, GD_MSG_GSYNCD_PARSE_ERROR,
    GD_MSG_SESSION_ALREADY_EXIST, GD_MSG_FORCE_CREATE_SESSION,
    GD_MSG_GET_KEY_FAILED, GD_MSG_SESSION_DEL_FAILED, GD_MSG_CMD_EXEC_FAIL,
    GD_MSG_STRDUP_FAILED, GD_MSG_UNABLE_TO_END, GD_MSG_PAUSE_FAILED,
    GD_MSG_NORMALIZE_URL_FAIL, GD_MSG_MODULE_ERROR,
    GD_MSG_SLAVEINFO_STORE_ERROR, GD_MSG_MARKER_START_FAIL,
    GD_MSG_RESUME_FAILED, GD_MSG_GLUSTERFS_START_FAIL,
    GD_MSG_GLUSTERFS_STOP_FAIL, GD_MSG_RBOP_STATE_STORE_FAIL,
    GD_MSG_PUMP_XLATOR_DISABLED, GD_MSG_ABORT_OP_FAIL, GD_MSG_PAUSE_OP_FAIL,
    GD_MSG_GLUSTER_SERVICE_START_FAIL, GD_MSG_HANDSHAKE_FAILED,
    GD_MSG_CLI_REQ_EMPTY, GD_MSG_PEER_ADD_FAIL,
    GD_MSG_SYNC_FROM_LOCALHOST_UNALLOWED, GD_MSG_UUIDS_SAME_RETRY,
    GD_MSG_TSP_ALREADY_FORMED, GD_MSG_VOLS_ALREADY_PRESENT,
    GD_MSG_REQ_CTX_CREATE_FAIL, GD_MSG_PEER_INFO_UPDATE_FAIL,
    GD_MSG_PEERINFO_CREATE_FAIL, GD_MSG_REQ_FROM_UNKNOWN_PEER,
    GD_MSG_STATUS_REPLY_STRING_CREATE_FAIL, GD_MSG_TOKENIZE_FAIL,
    GD_MSG_LAZY_UMOUNT_FAIL, GD_MSG_NFS_SERVER_START_FAIL,
    GD_MSG_GLUSTER_SERVICES_STOP_FAIL, GD_MSG_BRK_CLEANUP_FAIL,
    GD_MSG_RB_ALREADY_STARTED, GD_MSG_RB_BRICKINFO_GET_FAIL, GD_MSG_BAD_FORMAT,
    GD_MSG_RB_CMD_FAIL, GD_MSG_RB_NOT_STARTED_OR_PAUSED, GD_MSG_RB_NOT_STARTED,
    GD_MSG_RB_PAUSED_ALREADY, GD_MSG_NO_FREE_PORTS,
    GD_MSG_EVENT_STATE_TRANSITION_FAIL, GD_MSG_HANDLER_RETURNED,
    GD_MSG_SNAP_COMPARE_CONFLICT, GD_MSG_PEER_DETACH_CLEANUP_FAIL,
    GD_MSG_STALE_VOL_REMOVE_FAIL, GD_MSG_AC_ERROR, GD_MSG_LOCK_FAIL,
    GD_MSG_MGMTV3_LOCK_REQ_SEND_FAIL, GD_MSG_GLUSTERD_UNLOCK_FAIL,
    GD_MSG_RBOP_START_FAIL, GD_MSG_UNKNOWN_RESPONSE,
    GD_MSG_COMMIT_REQ_SEND_FAIL, GD_MSG_OPCTX_UPDATE_FAIL, GD_MSG_OPCTX_NULL,
    GD_MSG_DICT_COPY_FAIL, GD_MSG_SHD_STATUS_SET_FAIL,
    GD_MSG_REPLICA_INDEX_GET_FAIL, GD_MSG_NFS_SERVER_NOT_RUNNING,
    GD_MSG_STAGE_REQ_SEND_FAIL, GD_MSG_LOCK_REQ_SEND_FAIL,
    GD_MSG_VOLNAMES_GET_FAIL, GD_MSG_NO_TASK_ID, GD_MSG_ADD_REMOVE_BRICK_FAIL,
    GD_MSG_SVC_RESTART_FAIL, GD_MSG_VOL_SET_FAIL, GD_MSG_QUOTAD_NOT_RUNNING,
    GD_MSG_XLATOR_COUNT_GET_FAIL, GD_MSG_TRANS_OPINFO_GET_FAIL,
    GD_MSG_TRANS_ID_INVALID, GD_MSG_NO_OPTIONS_GIVEN, GD_MSG_SNAPD_NOT_RUNNING,
    GD_MSG_ADD_ADDRESS_TO_PEER_FAIL, GD_MSG_PEER_ADDRESS_GET_FAIL,
    GD_MSG_GETADDRINFO_FAIL, GD_MSG_PEERINFO_DELETE_FAIL, GD_MSG_KEY_NULL,
    GD_MSG_SPAWN_SVCS_FAIL, GD_MSG_DICT_ITER_FAIL,
    GD_MSG_TASK_STATUS_UPDATE_FAIL, GD_MSG_VOL_ID_MISMATCH,
    GD_MSG_STR_TO_BOOL_FAIL, GD_MSG_RB_MNT_BRICKS_MISMATCH,
    GD_MSG_RB_SRC_BRICKS_MISMATCH, GD_MSG_MNTENTRY_GET_FAIL,
    GD_MSG_INODE_SIZE_GET_FAIL, GD_MSG_NO_STATEFILE_ENTRY,
    GD_MSG_PMAP_UNSET_FAIL, GD_MSG_GLOBAL_OPT_IMPORT_FAIL,
    GD_MSD_BRICK_DISCONNECT_FAIL, GD_MSG_SNAP_DETAILS_IMPORT_FAIL,
    GD_MSG_BRICKINFO_CREATE_FAIL, GD_MSG_QUOTA_CKSUM_VER_STORE_FAIL,
    GD_MSG_CKSUM_GET_FAIL, GD_MSG_BRICKPATH_ROOT_GET_FAIL,
    GD_MSG_HOSTNAME_TO_UUID_FAIL, GD_MSG_REPLY_SUBMIT_FAIL,
    GD_MSG_SERIALIZE_MSG_FAIL, GD_MSG_ENCODE_FAIL,
    GD_MSG_RB_DST_BRICKS_MISMATCH, GD_MSG_XLATOR_VOLOPT_DYNLOAD_ERROR,
    GD_MSG_VOLNAME_NOTFOUND_IN_DICT, GD_MSG_FLAGS_NOTFOUND_IN_DICT,
    GD_MSG_HOSTNAME_NOTFOUND_IN_DICT, GD_MSG_PORT_NOTFOUND_IN_DICT,
    GD_MSG_CMDSTR_NOTFOUND_IN_DICT, GD_MSG_SNAP_OBJ_NEW_FAIL,
    GD_MSG_SNAP_BACKEND_MAKE_FAIL, GD_MSG_SNAP_CLONE_FAILED,
    GD_MSG_SNAP_CLONE_PREVAL_FAILED, GD_MSG_SNAP_CLONE_POSTVAL_FAILED,
    GD_MSG_VOLINFO_STORE_FAIL, GD_MSG_NEW_FRIEND_SM_EVENT_GET_FAIL,
    GD_MSG_VOL_TYPE_CHANGING_INFO, GD_MSG_BRKPATH_MNTPNT_MISMATCH,
    GD_MSG_TASKS_COUNT_MISMATCH, GD_MSG_WRONG_OPTS_SETTING,
    GD_MSG_PATH_ALREADY_PART_OF_VOL, GD_MSG_BRICK_VALIDATE_FAIL,
    GD_MSG_READIN_FILE_FAILED, GD_MSG_IMPORT_PRDICT_DICT,
    GD_MSG_VOL_OPTS_IMPORT_FAIL, GD_MSG_BRICK_IMPORT_FAIL,
    GD_MSG_VOLINFO_IMPORT_FAIL, GD_MSG_BRICK_ID_GEN_FAILED,
    GD_MSG_GET_STATUS_DATA_FAIL, GD_MSG_BITROT_NOT_RUNNING,
    GD_MSG_SCRUBBER_NOT_RUNNING, GD_MSG_SRC_BRICK_PORT_UNAVAIL,
    GD_MSG_BITD_INIT_FAIL, GD_MSG_SCRUB_INIT_FAIL, GD_MSG_VAR_RUN_DIR_INIT_FAIL,
    GD_MSG_VAR_RUN_DIR_FIND_FAIL, GD_MSG_SCRUBSVC_RECONF_FAIL,
    GD_MSG_BITDSVC_RECONF_FAIL, GD_MSG_NFS_GNS_START_FAIL,
    GD_MSG_NFS_GNS_SETUP_FAIL, GD_MSG_UNRECOGNIZED_SVC_MNGR,
    GD_MSG_NFS_GNS_OP_HANDLE_FAIL, GD_MSG_EXPORT_FILE_CREATE_FAIL,
    GD_MSG_NFS_GNS_HOST_FOUND, GD_MSG_REBALANCE_CMD_IN_TIER_VOL,
    GD_MSG_INCOMPATIBLE_VALUE, GD_MSG_GENERATED_UUID,
    GD_MSG_FILE_DESC_LIMIT_SET, GD_MSG_CURR_WORK_DIR_INFO,
    GD_MSG_STRIPE_COUNT_CHANGE_INFO, GD_MSG_REPLICA_COUNT_CHANGE_INFO,
    GD_MSG_ADD_BRICK_REQ_RECVD, GD_MSG_VOL_ALREADY_TIER,
    GD_MSG_REM_BRICK_REQ_RECVD, GD_MSG_VOL_NOT_TIER,
    GD_MSG_LOG_ROTATE_REQ_RECVD, GD_MSG_CLI_REQ_RECVD, GD_MSG_GET_VOL_REQ_RCVD,
    GD_MSG_VOL_SYNC_REQ_RCVD, GD_MSG_PROBE_RCVD, GD_MSG_UNFRIEND_REQ_RCVD,
    GD_MSG_FRIEND_UPDATE_RCVD, GD_MSG_RESPONSE_INFO,
    GD_MSG_VOL_PROFILE_REQ_RCVD, GD_MSG_GETWD_REQ_RCVD, GD_MSG_MOUNT_REQ_RCVD,
    GD_MSG_UMOUNT_REQ_RCVD, GD_MSG_CONNECT_RETURNED, GD_MSG_STATUS_VOL_REQ_RCVD,
    GD_MSG_CLRCLK_VOL_REQ_RCVD, GD_MSG_BARRIER_VOL_REQ_RCVD,
    GD_MSG_UUID_RECEIVED, GD_MSG_REPLACE_BRK_COMMIT_FORCE_REQ_RCVD,
    GD_MSG_BRK_PORT_NO_ADD_INDO, GD_MSG_REPLACE_BRK_REQ_RCVD,
    GD_MSG_ADD_OP_ARGS_FAIL, GD_MSG_POST_HOOK_STUB_INIT_FAIL,
    GD_MSG_HOOK_STUB_NULL, GD_MSG_SPAWN_THREADS_FAIL,
    GD_MSG_STALE_VOL_DELETE_INFO, GD_MSG_PROBE_REQ_RESP_RCVD,
    GD_MSG_HOST_PRESENT_ALREADY, GD_MSG_OP_VERS_INFO, GD_MSG_OP_VERS_SET_INFO,
    GD_MSG_NEW_NODE_STATE_CREATION, GD_MSG_ALREADY_MOUNTED,
    GD_MSG_SHARED_STRG_VOL_OPT_VALIDATE_FAIL, GD_MSG_NFS_GNS_STOP_FAIL,
    GD_MSG_NFS_GNS_RESET_FAIL, GD_MSG_SHARED_STRG_SET_FAIL,
    GD_MSG_VOL_TRANSPORT_TYPE_CHANGE, GD_MSG_PEER_COUNT_GET_FAIL,
    GD_MSG_INSUFFICIENT_UP_NODES, GD_MSG_OP_STAGE_STATS_VOL_FAIL,
    GD_MSG_VOL_ID_SET_FAIL, GD_MSG_OP_STAGE_RESET_VOL_FAIL,
    GD_MSG_OP_STAGE_BITROT_FAIL, GD_MSG_OP_STAGE_QUOTA_FAIL,
    GD_MSG_OP_STAGE_DELETE_VOL_FAIL, GD_MSG_HANDLE_HEAL_CMD_FAIL,
    GD_MSG_CLRCLK_SND_CMD_FAIL, GD_MSG_DISPERSE_CLUSTER_FOUND,
    GD_MSG_HEAL_VOL_REQ_RCVD, GD_MSG_STATEDUMP_VOL_REQ_RCVD,
    GD_MSG_THINPOOLS_FOR_THINLVS, GD_MSG_OP_STAGE_CREATE_VOL_FAIL,
    GD_MSG_OP_STAGE_START_VOL_FAIL, GD_MSG_NFS_GNS_UNEXPRT_VOL_FAIL,
    GD_MSG_TASK_ID_INFO, GD_MSG_DEREGISTER_SUCCESS, GD_MSG_STATEDUMP_OPTS_RCVD,
    GD_MSG_STATEDUMP_INFO, GD_MSG_RECOVERING_CORRUPT_CONF,
    GD_MSG_RETRIEVED_UUID, GD_MSG_XLATOR_CREATE_FAIL,
    GD_MSG_GRAPH_ENTRY_ADD_FAIL, GD_MSG_ERROR_ENCOUNTERED,
    GD_MSG_FILTER_RUN_FAILED, GD_MSG_DEFAULT_OPT_INFO,
    GD_MSG_MARKER_STATUS_GET_FAIL, GD_MSG_MARKER_DISABLE_FAIL,
    GD_MSG_GRAPH_FEATURE_ADD_FAIL, GD_MSG_XLATOR_SET_OPT_FAIL,
    GD_MSG_BUILD_GRAPH_FAILED, GD_MSG_XML_TEXT_WRITE_FAIL,
    GD_MSG_XML_DOC_START_FAIL, GD_MSG_XML_ELE_CREATE_FAIL,
    GD_MSG_VOLUME_INCONSISTENCY, GD_MSG_XLATOR_LINK_FAIL,
    GD_MSG_REMOTE_HOST_GET_FAIL, GD_MSG_GRAPH_SET_OPT_FAIL,
    GD_MSG_ROOT_SQUASH_ENABLED, GD_MSG_ROOT_SQUASH_FAILED,
    GD_MSG_LOCK_OWNER_MISMATCH, GD_MSG_LOCK_NOT_HELD, GD_MSG_LOCK_ALREADY_HELD,
    GD_MSG_SVC_START_SUCCESS, GD_MSG_SVC_STOP_SUCCESS, GD_MSG_PARAM_NULL,
    GD_MSG_SVC_STOP_FAIL, GD_MSG_SHARED_STORAGE_DOES_NOT_EXIST,
    GD_MSG_SNAP_PAUSE_TIER_FAIL, GD_MSG_SNAP_RESUME_TIER_FAIL,
    GD_MSG_FILE_NOT_FOUND, GD_MSG_RETRY_WITH_NEW_PORT,
    GD_MSG_REMOTE_VOL_UUID_FAIL, GD_MSG_SLAVE_VOL_PARSE_FAIL,
    GD_MSG_DICT_GET_SUCCESS, GD_MSG_PMAP_REGISTRY_REMOVE_FAIL,
    GD_MSG_MNTBROKER_LABEL_NULL, GD_MSG_MNTBROKER_LABEL_MISS,
    GD_MSG_MNTBROKER_SPEC_MISMATCH, GD_MSG_SYSCALL_FAIL,
    GD_MSG_DAEMON_STATE_REQ_RCVD, GD_MSG_BRICK_CLEANUP_SUCCESS,
    GD_MSG_STATE_STR_GET_FAILED, GD_MSG_RESET_BRICK_COMMIT_FORCE_REQ_RCVD,
    GD_MSG_RESET_BRICK_CMD_FAIL, GD_MSG_TIERD_STOP_FAIL,
    GD_MSG_TIERD_CREATE_FAIL, GD_MSG_TIERD_START_FAIL,
    GD_MSG_TIERD_OBJ_GET_FAIL, GD_MSG_TIERD_NOT_RUNNING, GD_MSG_TIERD_INIT_FAIL,
    GD_MSG_BRICK_MX_SET_FAIL, GD_MSG_NO_SIG_TO_PID_ZERO,
    GD_MSG_TIER_WATERMARK_RESET_FAIL, GD_MSG_CLIENTS_GET_STATE_FAILED,
    GD_MSG_GNFS_XLATOR_NOT_INSTALLED, GD_MSG_PIDFILE_UNLINKING,
    GD_MSG_VOL_SET_VALIDATION_INFO, GD_MSG_NO_MUX_LIMIT,
    GD_MSG_BRICKPROC_REM_BRICK_FAILED, GD_MSG_BRICKPROC_ADD_BRICK_FAILED,
    GD_MSG_BRICKPROC_NEW_FAILED, GD_MSG_STATVFS_FAILED, GD_MSG_GARBAGE_ARGS,
    GD_MSG_LOCALTIME_LOGGING_VOL_OPT_VALIDATE_FAIL,
    GD_MSG_LOCALTIME_LOGGING_ENABLE, GD_MSG_LOCALTIME_LOGGING_DISABLE,
    GD_MSG_PORTS_EXHAUSTED, GD_MSG_CHANGELOG_GET_FAIL,
    GD_MSG_MANAGER_FUNCTION_FAILED,
    GD_MSG_DAEMON_LOG_LEVEL_VOL_OPT_VALIDATE_FAIL, GD_MSG_SHD_START_FAIL,
    GD_MSG_SHD_OBJ_GET_FAIL, GD_MSG_SVC_ATTACH_FAIL, GD_MSG_ATTACH_INFO,
    GD_MSG_DETACH_INFO, GD_MSG_SVC_DETACH_FAIL,
    GD_MSG_RPC_TRANSPORT_GET_PEERNAME_FAIL);

#endif /* !_GLUSTERD_MESSAGES_H_ */
