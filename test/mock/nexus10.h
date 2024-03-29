struct cpuinfo_mock_file filesystem[] = {
	{
		.path = "/proc/cpuinfo",
		.size = 340,
		.content = "Processor\t: ARMv7 Processor rev 4 (v7l)\n"
			   "processor\t: 0\n"
			   "BogoMIPS\t: 997.78\n"
			   "\n"
			   "processor\t: 1\n"
			   "BogoMIPS\t: 997.78\n"
			   "\n"
			   "Features\t: swp half thumb fastmult vfp edsp neon vfpv3 tls vfpv4 idiva idivt \n"
			   "CPU implementer\t: 0x41\n"
			   "CPU architecture: 7\n"
			   "CPU variant\t: 0x0\n"
			   "CPU part\t: 0xc0f\n"
			   "CPU revision\t: 4\n"
			   "\n"
			   "Hardware\t: Manta\n"
			   "Revision\t: 0008\n"
			   "Serial\t\t: 4733303344323352\n",
	},
	{
		.path = "/system/build.prop",
		.size = 3182,
		.content =
			"\n"
			"# begin build properties\n"
			"# autogenerated by buildinfo.sh\n"
			"ro.build.id=LMY49J\n"
			"ro.build.display.id=LMY49J\n"
			"ro.build.version.incremental=2640980\n"
			"ro.build.version.sdk=22\n"
			"ro.build.version.codename=REL\n"
			"ro.build.version.all_codenames=REL\n"
			"ro.build.version.release=5.1.1\n"
			"ro.build.version.security_patch=2016-04-01\n"
			"ro.build.version.base_os=\n"
			"ro.build.date=Fri Feb 26 23:48:58 UTC 2016\n"
			"ro.build.date.utc=1456530538\n"
			"ro.build.type=user\n"
			"ro.build.user=android-build\n"
			"ro.build.host=wpiz9.hot.corp.google.com\n"
			"ro.build.tags=release-keys\n"
			"ro.build.flavor=mantaray-user\n"
			"ro.product.model=Nexus 10\n"
			"ro.product.brand=google\n"
			"ro.product.name=mantaray\n"
			"ro.product.device=manta\n"
			"ro.product.board=manta\n"
			"# ro.product.cpu.abi and ro.product.cpu.abi2 are obsolete,\n"
			"# use ro.product.cpu.abilist instead.\n"
			"ro.product.cpu.abi=armeabi-v7a\n"
			"ro.product.cpu.abi2=armeabi\n"
			"ro.product.cpu.abilist=armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist32=armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist64=\n"
			"ro.product.manufacturer=samsung\n"
			"ro.product.locale.language=en\n"
			"ro.product.locale.region=US\n"
			"ro.wifi.channels=\n"
			"ro.board.platform=exynos5\n"
			"# ro.build.product is obsolete; use ro.product.device\n"
			"ro.build.product=manta\n"
			"# Do not try to parse description, fingerprint, or thumbprint\n"
			"ro.build.description=mantaray-user 5.1.1 LMY49J 2640980 release-keys\n"
			"ro.build.fingerprint=google/mantaray/manta:5.1.1/LMY49J/2640980:user/release-keys\n"
			"ro.build.characteristics=tablet,nosdcard\n"
			"# end build properties\n"
			"\n"
			"#\n"
			"# ADDITIONAL_BUILD_PROPERTIES\n"
			"#\n"
			"wifi.interface=wlan0\n"
			"ro.opengles.version=196609\n"
			"ro.sf.lcd_density=320\n"
			"ro.hwui.texture_cache_size=72\n"
			"ro.hwui.layer_cache_size=48\n"
			"ro.hwui.r_buffer_cache_size=8\n"
			"ro.hwui.path_cache_size=32\n"
			"ro.hwui.gradient_cache_size=1\n"
			"ro.hwui.drop_shadow_cache_size=6\n"
			"ro.hwui.texture_cache_flushrate=0.4\n"
			"ro.hwui.text_small_cache_width=1024\n"
			"ro.hwui.text_small_cache_height=1024\n"
			"ro.hwui.text_large_cache_width=2048\n"
			"ro.hwui.text_large_cache_height=1024\n"
			"ro.hwui.disable_scissor_opt=true\n"
			"af.fast_track_multiplier=1\n"
			"dalvik.vm.heapstartsize=16m\n"
			"dalvik.vm.heapgrowthlimit=192m\n"
			"dalvik.vm.heapsize=512m\n"
			"dalvik.vm.heaptargetutilization=0.75\n"
			"dalvik.vm.heapminfree=512k\n"
			"dalvik.vm.heapmaxfree=8m\n"
			"media.aac_51_output_enabled=true\n"
			"ro.config.ringtone=Girtab.ogg\n"
			"ro.config.notification_sound=Tejat.ogg\n"
			"ro.config.alarm_alert=Oxygen.ogg\n"
			"ro.carrier=unknown\n"
			"ro.com.android.dateformat=MM-dd-yyyy\n"
			"ro.com.android.dataroaming=false\n"
			"ro.url.legal=http://www.google.com/intl/%s/mobile/android/basic/phone-legal.html\n"
			"ro.url.legal.android_privacy=http://www.google.com/intl/%s/mobile/android/basic/privacy.html\n"
			"ro.com.google.clientidbase=android-google\n"
			"ro.com.android.wifi-watchlist=GoogleGuest\n"
			"ro.error.receiver.system.apps=com.google.android.gms\n"
			"ro.setupwizard.enterprise_mode=1\n"
			"ro.setupwizard.network_required=true\n"
			"keyguard.no_require_sim=true\n"
			"ro.facelock.black_timeout=700\n"
			"ro.facelock.det_timeout=1500\n"
			"ro.facelock.rec_timeout=2500\n"
			"ro.facelock.lively_timeout=2500\n"
			"ro.facelock.est_max_time=500\n"
			"ro.facelock.use_intro_anim=true\n"
			"camera.flash_off=0\n"
			"drm.service.enabled=true\n"
			"ro.com.widevine.cachesize=16777216\n"
			"persist.sys.dalvik.vm.lib.2=libart.so\n"
			"dalvik.vm.isa.arm.features=div\n"
			"dalvik.vm.dexopt-flags=m=y\n"
			"net.bt.name=Android\n"
			"dalvik.vm.stack-trace-file=/data/anr/traces.txt\n"
			"\n",
	},
	{
		.path = "/sys/devices/system/cpu/kernel_max",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/possible",
		.size = 4,
		.content = "0-1\n",
	},
	{
		.path = "/sys/devices/system/cpu/present",
		.size = 4,
		.content = "0-1\n",
	},
	{
		.path = "/sys/devices/system/cpu/online",
		.size = 4,
		.content = "0-1\n",
	},
	{
		.path = "/sys/devices/system/cpu/offline",
		.size = 1,
		.content = "\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpufreq/all_time_in_state",
		.size = 309,
		.content = "freq\t\tcpu0\t\tcpu1\t\t\n"
			   "200000\t\t219\t\t219\t\t\n"
			   "300000\t\t17\t\t17\t\t\n"
			   "400000\t\t10\t\t10\t\t\n"
			   "500000\t\t17\t\t17\t\t\n"
			   "600000\t\t10\t\t10\t\t\n"
			   "700000\t\t0\t\t0\t\t\n"
			   "800000\t\t1\t\t1\t\t\n"
			   "900000\t\t19\t\t19\t\t\n"
			   "1000000\t\t519\t\t519\t\t\n"
			   "1100000\t\t33\t\t33\t\t\n"
			   "1200000\t\t50\t\t50\t\t\n"
			   "1300000\t\t54\t\t54\t\t\n"
			   "1400000\t\t232\t\t232\t\t\n"
			   "1500000\t\t219\t\t219\t\t\n"
			   "1600000\t\t131\t\t131\t\t\n"
			   "1700000\t\t1211\t\t1211\t\t\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpuidle/current_driver",
		.size = 12,
		.content = "exynos_idle\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpuidle/current_governor_ro",
		.size = 5,
		.content = "menu\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/affected_cpus",
		.size = 4,
		.content = "0 1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1700000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "200000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_transition_latency",
		.size = 7,
		.content = "100000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/related_cpus",
		.size = 4,
		.content = "0 1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_available_governors",
		.size = 35,
		.content = "userspace interactive performance \n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq",
		.size = 8,
		.content = "1000000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_driver",
		.size = 15,
		.content = "exynos_cpufreq\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_governor",
		.size = 12,
		.content = "interactive\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_min_freq",
		.size = 7,
		.content = "200000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/stats/time_in_state",
		.size = 173,
		.content = "1700000 1211\n"
			   "1600000 145\n"
			   "1500000 265\n"
			   "1400000 249\n"
			   "1300000 57\n"
			   "1200000 50\n"
			   "1100000 33\n"
			   "1000000 524\n"
			   "900000 19\n"
			   "800000 1\n"
			   "700000 0\n"
			   "600000 10\n"
			   "500000 17\n"
			   "400000 10\n"
			   "300000 17\n"
			   "200000 219\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/stats/total_trans",
		.size = 4,
		.content = "215\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings_list",
		.size = 4,
		.content = "0-1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/thread_siblings",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/thread_siblings_list",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/affected_cpus",
		.size = 4,
		.content = "0 1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1700000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "200000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_transition_latency",
		.size = 7,
		.content = "100000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/related_cpus",
		.size = 4,
		.content = "0 1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/scaling_available_governors",
		.size = 35,
		.content = "userspace interactive performance \n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/scaling_cur_freq",
		.size = 8,
		.content = "1000000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/scaling_driver",
		.size = 15,
		.content = "exynos_cpufreq\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/scaling_governor",
		.size = 12,
		.content = "interactive\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/scaling_min_freq",
		.size = 7,
		.content = "200000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/stats/time_in_state",
		.size = 173,
		.content = "1700000 1211\n"
			   "1600000 151\n"
			   "1500000 302\n"
			   "1400000 264\n"
			   "1300000 61\n"
			   "1200000 54\n"
			   "1100000 33\n"
			   "1000000 585\n"
			   "900000 19\n"
			   "800000 1\n"
			   "700000 2\n"
			   "600000 10\n"
			   "500000 23\n"
			   "400000 10\n"
			   "300000 33\n"
			   "200000 338\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/stats/total_trans",
		.size = 4,
		.content = "249\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_siblings",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_siblings_list",
		.size = 4,
		.content = "0-1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/thread_siblings",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/thread_siblings_list",
		.size = 2,
		.content = "1\n",
	},
	{NULL},
};
#ifdef __ANDROID__
struct cpuinfo_mock_property properties[] = {
	{
		.key = "af.fast_track_multiplier",
		.value = "1",
	},
	{
		.key = "camera.flash_off",
		.value = "0",
	},
	{
		.key = "dalvik.vm.dex2oat-Xms",
		.value = "64m",
	},
	{
		.key = "dalvik.vm.dex2oat-Xmx",
		.value = "512m",
	},
	{
		.key = "dalvik.vm.dexopt-flags",
		.value = "m=y",
	},
	{
		.key = "dalvik.vm.heapgrowthlimit",
		.value = "192m",
	},
	{
		.key = "dalvik.vm.heapmaxfree",
		.value = "8m",
	},
	{
		.key = "dalvik.vm.heapminfree",
		.value = "512k",
	},
	{
		.key = "dalvik.vm.heapsize",
		.value = "512m",
	},
	{
		.key = "dalvik.vm.heapstartsize",
		.value = "16m",
	},
	{
		.key = "dalvik.vm.heaptargetutilization",
		.value = "0.75",
	},
	{
		.key = "dalvik.vm.image-dex2oat-Xms",
		.value = "64m",
	},
	{
		.key = "dalvik.vm.image-dex2oat-Xmx",
		.value = "64m",
	},
	{
		.key = "dalvik.vm.isa.arm.features",
		.value = "div",
	},
	{
		.key = "dalvik.vm.stack-trace-file",
		.value = "/data/anr/traces.txt",
	},
	{
		.key = "debug.force_rtl",
		.value = "0",
	},
	{
		.key = "dev.bootcomplete",
		.value = "1",
	},
	{
		.key = "dhcp.wlan0.dns1",
		.value = "208.67.222.222",
	},
	{
		.key = "dhcp.wlan0.dns2",
		.value = "208.67.220.220",
	},
	{
		.key = "dhcp.wlan0.dns3",
		.value = "",
	},
	{
		.key = "dhcp.wlan0.dns4",
		.value = "",
	},
	{
		.key = "dhcp.wlan0.domain",
		.value = "tfbnw.net",
	},
	{
		.key = "dhcp.wlan0.gateway",
		.value = "172.22.192.1",
	},
	{
		.key = "dhcp.wlan0.ipaddress",
		.value = "172.22.216.233",
	},
	{
		.key = "dhcp.wlan0.leasetime",
		.value = "10569",
	},
	{
		.key = "dhcp.wlan0.mask",
		.value = "255.255.224.0",
	},
	{
		.key = "dhcp.wlan0.mtu",
		.value = "",
	},
	{
		.key = "dhcp.wlan0.pid",
		.value = "1748",
	},
	{
		.key = "dhcp.wlan0.reason",
		.value = "REBOOT",
	},
	{
		.key = "dhcp.wlan0.result",
		.value = "ok",
	},
	{
		.key = "dhcp.wlan0.server",
		.value = "192.168.137.185",
	},
	{
		.key = "dhcp.wlan0.vendorInfo",
		.value = "",
	},
	{
		.key = "drm.service.enabled",
		.value = "true",
	},
	{
		.key = "gsm.current.phone-type",
		.value = "1",
	},
	{
		.key = "gsm.network.type",
		.value = "Unknown",
	},
	{
		.key = "gsm.operator.alpha",
		.value = "",
	},
	{
		.key = "gsm.operator.iso-country",
		.value = "",
	},
	{
		.key = "gsm.operator.isroaming",
		.value = "false",
	},
	{
		.key = "gsm.operator.numeric",
		.value = "",
	},
	{
		.key = "gsm.sim.operator.alpha",
		.value = "",
	},
	{
		.key = "gsm.sim.operator.iso-country",
		.value = "",
	},
	{
		.key = "gsm.sim.operator.numeric",
		.value = "",
	},
	{
		.key = "gsm.sim.state",
		.value = "NOT_READY",
	},
	{
		.key = "init.svc.adbd",
		.value = "running",
	},
	{
		.key = "init.svc.bootanim",
		.value = "stopped",
	},
	{
		.key = "init.svc.debuggerd",
		.value = "running",
	},
	{
		.key = "init.svc.dhcpcd_wlan0",
		.value = "running",
	},
	{
		.key = "init.svc.drm",
		.value = "running",
	},
	{
		.key = "init.svc.flash_recovery",
		.value = "stopped",
	},
	{
		.key = "init.svc.gpsd",
		.value = "running",
	},
	{
		.key = "init.svc.healthd",
		.value = "running",
	},
	{
		.key = "init.svc.installd",
		.value = "running",
	},
	{
		.key = "init.svc.keystore",
		.value = "running",
	},
	{
		.key = "init.svc.lmkd",
		.value = "running",
	},
	{
		.key = "init.svc.logd",
		.value = "running",
	},
	{
		.key = "init.svc.media",
		.value = "running",
	},
	{
		.key = "init.svc.mobicore",
		.value = "running",
	},
	{
		.key = "init.svc.netd",
		.value = "running",
	},
	{
		.key = "init.svc.p2p_supplicant",
		.value = "running",
	},
	{
		.key = "init.svc.sdcard",
		.value = "running",
	},
	{
		.key = "init.svc.servicemanager",
		.value = "running",
	},
	{
		.key = "init.svc.surfaceflinger",
		.value = "running",
	},
	{
		.key = "init.svc.ueventd",
		.value = "running",
	},
	{
		.key = "init.svc.vold",
		.value = "running",
	},
	{
		.key = "init.svc.watchdogd",
		.value = "running",
	},
	{
		.key = "init.svc.zygote",
		.value = "running",
	},
	{
		.key = "keyguard.no_require_sim",
		.value = "true",
	},
	{
		.key = "media.aac_51_output_enabled",
		.value = "true",
	},
	{
		.key = "net.bt.name",
		.value = "Android",
	},
	{
		.key = "net.change",
		.value = "net.dns2",
	},
	{
		.key = "net.dns1",
		.value = "208.67.222.222",
	},
	{
		.key = "net.dns2",
		.value = "208.67.220.220",
	},
	{
		.key = "net.hostname",
		.value = "android-9c98d9ad799416bc",
	},
	{
		.key = "net.qtaguid_enabled",
		.value = "1",
	},
	{
		.key = "net.tcp.default_init_rwnd",
		.value = "60",
	},
	{
		.key = "persist.sys.country",
		.value = "US",
	},
	{
		.key = "persist.sys.dalvik.vm.lib.2",
		.value = "libart.so",
	},
	{
		.key = "persist.sys.language",
		.value = "en",
	},
	{
		.key = "persist.sys.localevar",
		.value = "",
	},
	{
		.key = "persist.sys.profiler_ms",
		.value = "0",
	},
	{
		.key = "persist.sys.timezone",
		.value = "America/Los_Angeles",
	},
	{
		.key = "persist.sys.usb.config",
		.value = "mtp,adb",
	},
	{
		.key = "ro.adb.secure",
		.value = "1",
	},
	{
		.key = "ro.allow.mock.location",
		.value = "0",
	},
	{
		.key = "ro.baseband",
		.value = "unknown",
	},
	{
		.key = "ro.board.platform",
		.value = "exynos5",
	},
	{
		.key = "ro.boot.bootloader",
		.value = "MANTAMF01",
	},
	{
		.key = "ro.boot.btmacaddr",
		.value = "A8:06:00:C5:16:20",
	},
	{
		.key = "ro.boot.serialno",
		.value = "R32D303GS1H",
	},
	{
		.key = "ro.boot.wifimacaddr",
		.value = "A8:06:00:C5:16:21",
	},
	{
		.key = "ro.bootloader",
		.value = "MANTAMF01",
	},
	{
		.key = "ro.bootmode",
		.value = "unknown",
	},
	{
		.key = "ro.bt.bdaddr_path",
		.value = "/factory/bluetooth/bt_addr",
	},
	{
		.key = "ro.build.characteristics",
		.value = "tablet,nosdcard",
	},
	{
		.key = "ro.build.date.utc",
		.value = "1456530538",
	},
	{
		.key = "ro.build.date",
		.value = "Fri Feb 26 23:48:58 UTC 2016",
	},
	{
		.key = "ro.build.description",
		.value = "mantaray-user 5.1.1 LMY49J 2640980 release-keys",
	},
	{
		.key = "ro.build.display.id",
		.value = "LMY49J",
	},
	{
		.key = "ro.build.fingerprint",
		.value = "google/mantaray/manta:5.1.1/LMY49J/2640980:user/release-keys",
	},
	{
		.key = "ro.build.flavor",
		.value = "mantaray-user",
	},
	{
		.key = "ro.build.host",
		.value = "wpiz9.hot.corp.google.com",
	},
	{
		.key = "ro.build.id",
		.value = "LMY49J",
	},
	{
		.key = "ro.build.product",
		.value = "manta",
	},
	{
		.key = "ro.build.tags",
		.value = "release-keys",
	},
	{
		.key = "ro.build.type",
		.value = "user",
	},
	{
		.key = "ro.build.user",
		.value = "android-build",
	},
	{
		.key = "ro.build.version.all_codenames",
		.value = "REL",
	},
	{
		.key = "ro.build.version.base_os",
		.value = "",
	},
	{
		.key = "ro.build.version.codename",
		.value = "REL",
	},
	{
		.key = "ro.build.version.incremental",
		.value = "2640980",
	},
	{
		.key = "ro.build.version.release",
		.value = "5.1.1",
	},
	{
		.key = "ro.build.version.sdk",
		.value = "22",
	},
	{
		.key = "ro.build.version.security_patch",
		.value = "2016-04-01",
	},
	{
		.key = "ro.carrier",
		.value = "unknown",
	},
	{
		.key = "ro.com.android.dataroaming",
		.value = "false",
	},
	{
		.key = "ro.com.android.dateformat",
		.value = "MM-dd-yyyy",
	},
	{
		.key = "ro.com.android.wifi-watchlist",
		.value = "GoogleGuest",
	},
	{
		.key = "ro.com.google.clientidbase",
		.value = "android-google",
	},
	{
		.key = "ro.com.widevine.cachesize",
		.value = "16777216",
	},
	{
		.key = "ro.config.alarm_alert",
		.value = "Oxygen.ogg",
	},
	{
		.key = "ro.config.notification_sound",
		.value = "Tejat.ogg",
	},
	{
		.key = "ro.config.ringtone",
		.value = "Girtab.ogg",
	},
	{
		.key = "ro.crypto.fuse_sdcard",
		.value = "true",
	},
	{
		.key = "ro.crypto.state",
		.value = "unencrypted",
	},
	{
		.key = "ro.dalvik.vm.native.bridge",
		.value = "0",
	},
	{
		.key = "ro.debuggable",
		.value = "0",
	},
	{
		.key = "ro.error.receiver.system.apps",
		.value = "com.google.android.gms",
	},
	{
		.key = "ro.facelock.black_timeout",
		.value = "700",
	},
	{
		.key = "ro.facelock.det_timeout",
		.value = "1500",
	},
	{
		.key = "ro.facelock.est_max_time",
		.value = "500",
	},
	{
		.key = "ro.facelock.lively_timeout",
		.value = "2500",
	},
	{
		.key = "ro.facelock.rec_timeout",
		.value = "2500",
	},
	{
		.key = "ro.facelock.use_intro_anim",
		.value = "true",
	},
	{
		.key = "ro.factorytest",
		.value = "0",
	},
	{
		.key = "ro.hardware",
		.value = "manta",
	},
	{
		.key = "ro.hwui.disable_scissor_opt",
		.value = "true",
	},
	{
		.key = "ro.hwui.drop_shadow_cache_size",
		.value = "6",
	},
	{
		.key = "ro.hwui.gradient_cache_size",
		.value = "1",
	},
	{
		.key = "ro.hwui.layer_cache_size",
		.value = "48",
	},
	{
		.key = "ro.hwui.path_cache_size",
		.value = "32",
	},
	{
		.key = "ro.hwui.r_buffer_cache_size",
		.value = "8",
	},
	{
		.key = "ro.hwui.text_large_cache_height",
		.value = "1024",
	},
	{
		.key = "ro.hwui.text_large_cache_width",
		.value = "2048",
	},
	{
		.key = "ro.hwui.text_small_cache_height",
		.value = "1024",
	},
	{
		.key = "ro.hwui.text_small_cache_width",
		.value = "1024",
	},
	{
		.key = "ro.hwui.texture_cache_flushrate",
		.value = "0.4",
	},
	{
		.key = "ro.hwui.texture_cache_size",
		.value = "72",
	},
	{
		.key = "ro.opengles.version",
		.value = "196609",
	},
	{
		.key = "ro.product.board",
		.value = "manta",
	},
	{
		.key = "ro.product.brand",
		.value = "google",
	},
	{
		.key = "ro.product.cpu.abi2",
		.value = "armeabi",
	},
	{
		.key = "ro.product.cpu.abi",
		.value = "armeabi-v7a",
	},
	{
		.key = "ro.product.cpu.abilist32",
		.value = "armeabi-v7a,armeabi",
	},
	{
		.key = "ro.product.cpu.abilist64",
		.value = "",
	},
	{
		.key = "ro.product.cpu.abilist",
		.value = "armeabi-v7a,armeabi",
	},
	{
		.key = "ro.product.device",
		.value = "manta",
	},
	{
		.key = "ro.product.locale.language",
		.value = "en",
	},
	{
		.key = "ro.product.locale.region",
		.value = "US",
	},
	{
		.key = "ro.product.manufacturer",
		.value = "samsung",
	},
	{
		.key = "ro.product.model",
		.value = "Nexus 10",
	},
	{
		.key = "ro.product.name",
		.value = "mantaray",
	},
	{
		.key = "ro.radio.noril",
		.value = "yes",
	},
	{
		.key = "ro.revision",
		.value = "8",
	},
	{
		.key = "ro.runtime.firstboot",
		.value = "1515119518495",
	},
	{
		.key = "ro.secure",
		.value = "1",
	},
	{
		.key = "ro.serialno",
		.value = "R32D303GS1H",
	},
	{
		.key = "ro.setupwizard.enterprise_mode",
		.value = "1",
	},
	{
		.key = "ro.setupwizard.network_required",
		.value = "true",
	},
	{
		.key = "ro.sf.lcd_density",
		.value = "320",
	},
	{
		.key = "ro.url.legal.android_privacy",
		.value = "http://www.google.com/intl/%s/mobile/android/basic/privacy.html",
	},
	{
		.key = "ro.url.legal",
		.value = "http://www.google.com/intl/%s/mobile/android/basic/phone-legal.html",
	},
	{
		.key = "ro.wifi.channels",
		.value = "",
	},
	{
		.key = "ro.zygote",
		.value = "zygote32",
	},
	{
		.key = "selinux.reload_policy",
		.value = "1",
	},
	{
		.key = "service.bootanim.exit",
		.value = "1",
	},
	{
		.key = "sys.boot_completed",
		.value = "1",
	},
	{
		.key = "sys.sysctl.extra_free_kbytes",
		.value = "48000",
	},
	{
		.key = "sys.sysctl.tcp_def_init_rwnd",
		.value = "60",
	},
	{
		.key = "sys.usb.config",
		.value = "mtp,adb",
	},
	{
		.key = "sys.usb.state",
		.value = "mtp,adb",
	},
	{
		.key = "vold.post_fs_data_done",
		.value = "1",
	},
	{
		.key = "wifi.interface",
		.value = "wlan0",
	},
	{
		.key = "wlan.driver.status",
		.value = "ok",
	},
	{NULL},
};
#endif /* __ANDROID__ */
