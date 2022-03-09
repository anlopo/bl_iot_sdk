# Build Script Description
```html
genblehogp:        BLE as slave, enable HOGP service.
genblem0s1:        1 BLE connection is supported, BL702 can only be slave in this connection.
genblem0s1p:       based on genblem0s1, add BLE PDS(power down sleep) feature.
genblem0s1s:       based on genblem0s1, add BLE scan feature.
genblem16s1:       16 BLE connections are suppprted, BL702 can be master or slave in each connection.
genblemesh:        build mesh application without meshmodel code.
genblemeshmodel:   build mesh application with meshmodel code.
genblestd：        2 BLE connections are suppprted, BL702 can be master or slave in each connection.
geneth:            build enthernet application.
genflashmap:       build Zigbee and BLE. BLE support all roles, 2 BLE connection is supported, enable tp and OAD service.
genromap:          Used to generate sdk.
genzb:             build generic Zigbee image; after boot, if device haven't join a network, user need to use the "zb_set_role" CLI command to set device type, use the "zb_register_dev" CLI command to register endpoint and ZCL clusters, then use the "zb_start" or "zb_form" CLI command to join/form a network; if device already in a network, user need to use the "zb_register_dev" CLI command to register endpoint and ZCL clusters, then use the "zb_start" CLI command to restore network.
genzcstartup:      build Zigbee Coordinator image; after boot, if haven't form a network, user can either use use the "zb_form" CLI command to form a nwk manually by specifying channel and panId, or use the "zb_start" CLI command to let stack select the channel and panId, if already in a network, restore network and resume opertion.
genzcstartuppsram: build Zigbee Coordinator image with psram support; It makes C++ new/detele mallo/release from psram, not sram after system_init. After boot, if haven't form a network, user can either use use the "zb_form" CLI command to form a nwk manually by specifying channel and panId, or use the "zb_start" CLI command to let stack select the channel and panId, if already in a network, restore network and resume opertion.
genzrstartup:      build Zigbee Router image; after boot, device will scan and join a network automatically if haven't join a network, otherwise, restore network and resume operation.
genznsedstartup:   build Zigbee Non-Sleepy End Device image; after boot, device will scan and join a network automatically if haven't join a network, otherwise, restore network and resume operation.
genzsedstartupwithhbn:          build Zigbee Sleepy End Device image; after boot, device will scan and join a network automatically if haven't join a network, otherwise, restore network and resume operation. If device is not active in a zigbee network, it enters into pds31 when it can sleep. If device is active in a zigbee network,it enters into hbn0 when it can sleep.
genzsedstartupwithpds:          build Zigbee Sleepy End Device image; after boot, device will scan and join a network automatically if haven't join a network, otherwise, restore network and resume operation. Device enters into pds31 when it can sleep.
genzsedstartupwithpds3:         build Zigbee Sleepy End Device image; after boot, device will scan and join a network automatically if haven't join a network, otherwise, restore network and resume operation. Device enters into pds3 when it can sleep.
genzsedstartupblescanwithpds3:  build image that supports both Zigbee Sleepy End Device and ble observer. After boot,Device will do zigbee scan and join a zigbee network automatically if haven't join a zigbee network, otherwise, restore network and resume operation. At the meantime, device will do ble scan. Device enters into pds3 when it can sleep.
```
# Notice
For BouffaloLabDevCube version <= 1.5.3, please use partition table files (partition_cfg_*.toml) under this folder.