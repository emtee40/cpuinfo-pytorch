struct cpuinfo_mock_file filesystem[] = {
	{
		.path = "/proc/cpuinfo",
		.size = 320,
		.content = "Processor\t: ARMv7 Processor rev 5 (v7l)\n"
			   "processor\t: 0\n"
			   "BogoMIPS\t: 3428.56\n"
			   "\n"
			   "Features\t: swp half thumb fastmult vfp edsp thumbee neon vfpv3 tls vfpv4 idiva idivt \n"
			   "CPU implementer\t: 0x41\n"
			   "CPU architecture: 7\n"
			   "CPU variant\t: 0x0\n"
			   "CPU part\t: 0xc07\n"
			   "CPU revision\t: 5\n"
			   "\n"
			   "Hardware\t: sun8i\n"
			   "Revision\t: 0000\n"
			   "Serial\t\t: 86441af7d7f700000000\n",
	},
	{
		.path = "/system/build.prop",
		.size = 2845,
		.content = "# begin build properties\n"
			   "# autogenerated by buildinfo.sh\n"
			   "ro.build.id=KVT49L\n"
			   "ro.build.display.id=astar_y3-eng 4.4.2 KVT49L 20151112 test-keys\n"
			   "ro.build.version.incremental=20151112\n"
			   "ro.build.version.sdk=19\n"
			   "ro.build.version.codename=REL\n"
			   "ro.build.version.release=4.4.2\n"
			   "ro.build.date=2015xC4xEA 11xD4xC2 12xC8xD5 xD0xC7xC6xDAxCBxC4 16:07:41 CST\n"
			   "ro.build.date.utc=1447315661\n"
			   "ro.build.type=eng\n"
			   "ro.build.user=ytx\n"
			   "ro.build.host=Android\n"
			   "ro.build.tags=test-keys\n"
			   "ro.product.model=V11\n"
			   "ro.product.brand=Allwinner\n"
			   "ro.product.name=astar_y3\n"
			   "ro.product.device=astar-y3\n"
			   "ro.product.board=exdroid\n"
			   "ro.product.cpu.abi=armeabi-v7a\n"
			   "ro.product.cpu.abi2=armeabi\n"
			   "ro.product.manufacturer=softwinner\n"
			   "ro.product.locale.language=en\n"
			   "ro.product.locale.region=US\n"
			   "ro.wifi.channels=\n"
			   "ro.board.platform=polaris\n"
			   "# ro.build.product is obsolete; use ro.product.device\n"
			   "ro.build.product=astar-y3\n"
			   "# Do not try to parse ro.build.description or .fingerprint\n"
			   "ro.build.description=astar_y3-eng 4.4.2 KVT49L 20151112 test-keys\n"
			   "ro.build.fingerprint=Allwinner/astar_y3/astar-y3:4.4.2/KVT49L/20151112:eng/test-keys\n"
			   "ro.build.characteristics=tablet\n"
			   "# end build properties\n"
			   "\n"
			   "#\n"
			   "# ADDITIONAL_BUILD_PROPERTIES\n"
			   "#\n"
			   "ro.com.android.dateformat=MM-dd-yyyy\n"
			   "ro.config.ringtone=Ring_Synth_04.ogg\n"
			   "ro.config.notification_sound=pixiedust.ogg\n"
			   "ro.carrier=unknown\n"
			   "ro.config.alarm_alert=Alarm_Classic.ogg\n"
			   "ro.zygote.disable_gl_preload=true\n"
			   "persist.sys.strictmode.visual=0\n"
			   "persist.sys.strictmode.disable=1\n"
			   "persist.sys.plimit=0\n"
			   "ro.opengles.version=131072\n"
			   "ro.kernel.android.checkjni=0\n"
			   "ro.reversion.aw_sdk_tag=exdroid4.4.2_r2-a33-v2.0\n"
			   "ro.sys.cputype=QuadCore-A33\n"
			   "wifi.interface=wlan0\n"
			   "wifi.supplicant_scan_interval=15\n"
			   "keyguard.no_require_sim=true\n"
			   "ro.sys.network_location=true\n"
			   "persist.demo.hdmirotationlock=0\n"
			   "drm.service.enabled=true\n"
			   "dalvik.vm.heapstartsize=8m\n"
			   "dalvik.vm.heapgrowthlimit=64m\n"
			   "dalvik.vm.heapsize=384m\n"
			   "dalvik.vm.heaptargetutilization=0.75\n"
			   "dalvik.vm.heapminfree=512k\n"
			   "dalvik.vm.heapmaxfree=8m\n"
			   "ro.sw.embeded.telephony=false\n"
			   "persist.sys.timezone=Europe/London\n"
			   "persist.sys.language=en\n"
			   "persist.sys.country=US\n"
			   "ro.product.8723b_bt.used=true\n"
			   "persist.sys.usb.config=mass_storage,adb\n"
			   "ro.udisk.lable=Polaris\n"
			   "ro.font.scale=1.15\n"
			   "ro.hwa.force=false\n"
			   "rw.logger=0\n"
			   "ro.sys.bootfast=true\n"
			   "debug.hwc.showfps=0\n"
			   "eken.board.platform=exDroid\n"
			   "eken.device.telephone=false\n"
			   "eken.wmt.homepage_base=http://www.google.com\n"
			   "eken.hardware=sun7i\n"
			   "eken.hardware.screen.size=11\n"
			   "eken.hardware.screen.res=1024x600\n"
			   "eken.build.version.release=4.4.1\n"
			   "eken.build.version.sdk=17\n"
			   "eken.product.model=V11\n"
			   "eken.product.device=astar_y3\n"
			   "eken.product.name=astar_y3\n"
			   "eken.product.manufacturer=eken\n"
			   "debug.hwui.render_dirty_regions=false\n"
			   "ro.sys.mutedrm=true\n"
			   "ro.sf.lcd_density=160\n"
			   "ro.product.firmware=v2.0\n"
			   "ro.setupwizard.mode=OPTIONAL\n"
			   "ro.com.google.gmsversion=4.4_r3\n"
			   "persist.sys.dalvik.vm.lib=libdvm.so\n"
			   "dalvik.vm.dexopt-flags=v=n,m=y\n"
			   "net.bt.name=Android\n"
			   "dalvik.vm.stack-trace-file=/data/anr/traces.txt\n",
	},
	{
		.path = "/sys/devices/system/cpu/kernel_max",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/possible",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/present",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/online",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/offline",
		.size = 4,
		.content = "1-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/affected_cpus",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1344000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "120000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_transition_latency",
		.size = 8,
		.content = "2000000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/related_cpus",
		.size = 8,
		.content = "0 1 2 3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_available_governors",
		.size = 67,
		.content = "interactive conservative ondemand userspace powersave performance \n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq",
		.size = 7,
		.content = "240000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_driver",
		.size = 14,
		.content = "cpufreq-sunxi\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_governor",
		.size = 12,
		.content = "interactive\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_max_freq",
		.size = 8,
		.content = "1200000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_min_freq",
		.size = 7,
		.content = "120000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/stats/time_in_state",
		.size = 171,
		.content = "60000 0\n"
			   "120000 213\n"
			   "240000 106\n"
			   "312000 6\n"
			   "408000 29\n"
			   "504000 0\n"
			   "600000 0\n"
			   "648000 163\n"
			   "720000 48\n"
			   "816000 62\n"
			   "912000 5\n"
			   "1008000 7\n"
			   "1104000 47\n"
			   "1200000 3381\n"
			   "1344000 0\n"
			   "1440000 0\n"
			   "1536000 0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/stats/total_trans",
		.size = 3,
		.content = "24\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/stats/trans_table",
		.size = 3293,
		.content =
			"   From  :    To\n"
			"         :     60000    120000    240000    312000    408000    504000    600000    648000    720000    816000    912000   1008000   1104000   1200000   1344000   1440000   1536000 \n"
			"    60000:         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0 \n"
			"   120000:         0         0         0         0         0         0         0         3         0         0         0         0         0         0         0         0         0 \n"
			"   240000:         0         0         0         0         0         0         0         1         0         0         0         0         0         0         0         0         0 \n"
			"   312000:         0         1         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0 \n"
			"   408000:         0         1         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0 \n"
			"   504000:         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0 \n"
			"   600000:         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0 \n"
			"   648000:         0         0         0         1         1         0         0         0         4         0         0         0         0         0         0         0         0 \n"
			"   720000:         0         0         1         0         0         0         0         0         0         3         0         0         0         0         0         0         0 \n"
			"   816000:         0         1         0         0         0         0         0         1         0         0         1         0         0         0         0         0         0 \n"
			"   912000:         0         0         0         0         0         0         0         0         0         0         0         0         1         0         0         0         0 \n"
			"  1008000:         0         0         0         0         0         0         0         1         0         0         0         0         0         1         0         0         0 \n"
			"  1104000:         0         0         0         0         0         0         0         0         0         0         0         0         0         1         0         0         0 \n"
			"  1200000:         0         0         0         0         0         0         0         1         0         0         0         1         0         0         0         0         0 \n"
			"  1344000:         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0 \n"
			"  1440000:         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0 \n"
			"  1536000:         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0         0 \n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings",
		.size = 2,
		.content = "f\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
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
	{NULL},
};
#ifdef __ANDROID__
struct cpuinfo_mock_property properties[] = {
	{
		.key = "dalvik.vm.dexopt-flags",
		.value = "v=n,m=y",
	},
	{
		.key = "dalvik.vm.heapgrowthlimit",
		.value = "96m",
	},
	{
		.key = "dalvik.vm.heapmaxfree",
		.value = "8m",
	},
	{
		.key = "dalvik.vm.heapminfree",
		.value = "2m",
	},
	{
		.key = "dalvik.vm.heapsize",
		.value = "384m",
	},
	{
		.key = "dalvik.vm.heapstartsize",
		.value = "8m",
	},
	{
		.key = "dalvik.vm.heaptargetutilization",
		.value = "0.75",
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
		.key = "debug.hwc.showfps",
		.value = "0",
	},
	{
		.key = "debug.hwui.render_dirty_regions",
		.value = "false",
	},
	{
		.key = "dev.bootcomplete",
		.value = "1",
	},
	{
		.key = "drm.service.enabled",
		.value = "true",
	},
	{
		.key = "eken.board.platform",
		.value = "exDroid",
	},
	{
		.key = "eken.build.version.release",
		.value = "4.4.1",
	},
	{
		.key = "eken.build.version.sdk",
		.value = "17",
	},
	{
		.key = "eken.device.telephone",
		.value = "false",
	},
	{
		.key = "eken.hardware.screen.res",
		.value = "1024x600",
	},
	{
		.key = "eken.hardware.screen.size",
		.value = "11",
	},
	{
		.key = "eken.hardware",
		.value = "sun7i",
	},
	{
		.key = "eken.product.device",
		.value = "astar_y3",
	},
	{
		.key = "eken.product.manufacturer",
		.value = "eken",
	},
	{
		.key = "eken.product.model",
		.value = "V11",
	},
	{
		.key = "eken.product.name",
		.value = "astar_y3",
	},
	{
		.key = "eken.wmt.homepage_base",
		.value = "http://www.google.com",
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
		.key = "gsm.sim.state",
		.value = "NOT_READY",
	},
	{
		.key = "gsm.version.ril-impl",
		.value = "sw-dataonly-ril-for-4.4_v1.0",
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
		.key = "init.svc.bootclone",
		.value = "stopped",
	},
	{
		.key = "init.svc.checksum",
		.value = "stopped",
	},
	{
		.key = "init.svc.console",
		.value = "running",
	},
	{
		.key = "init.svc.debuggerd",
		.value = "running",
	},
	{
		.key = "init.svc.drm",
		.value = "running",
	},
	{
		.key = "init.svc.engsetbtmacaddr",
		.value = "stopped",
	},
	{
		.key = "init.svc.engsetmacaddr",
		.value = "stopped",
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
		.key = "init.svc.lights_leds",
		.value = "stopped",
	},
	{
		.key = "init.svc.media",
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
		.key = "init.svc.precopy",
		.value = "stopped",
	},
	{
		.key = "init.svc.preinstall",
		.value = "stopped",
	},
	{
		.key = "init.svc.ril-daemon",
		.value = "running",
	},
	{
		.key = "init.svc.sensors",
		.value = "stopped",
	},
	{
		.key = "init.svc.servicemanager",
		.value = "running",
	},
	{
		.key = "init.svc.shcmd",
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
		.key = "init.svc.zygote",
		.value = "running",
	},
	{
		.key = "keyguard.no_require_sim",
		.value = "true",
	},
	{
		.key = "net.bt.name",
		.value = "Android",
	},
	{
		.key = "net.change",
		.value = "net.qtaguid_enabled",
	},
	{
		.key = "net.hostname",
		.value = "android-e694619d17a0d5e2",
	},
	{
		.key = "net.qtaguid_enabled",
		.value = "1",
	},
	{
		.key = "net.tcp.buffersize.default",
		.value = "4096,87380,110208,4096,16384,110208",
	},
	{
		.key = "net.tcp.buffersize.edge",
		.value = "4093,26280,35040,4096,16384,35040",
	},
	{
		.key = "net.tcp.buffersize.evdo",
		.value = "4094,87380,262144,4096,16384,262144",
	},
	{
		.key = "net.tcp.buffersize.gprs",
		.value = "4092,8760,11680,4096,8760,11680",
	},
	{
		.key = "net.tcp.buffersize.hsdpa",
		.value = "4094,87380,262144,4096,16384,262144",
	},
	{
		.key = "net.tcp.buffersize.hspa",
		.value = "4094,87380,262144,4096,16384,262144",
	},
	{
		.key = "net.tcp.buffersize.hspap",
		.value = "4094,87380,1220608,4096,16384,1220608",
	},
	{
		.key = "net.tcp.buffersize.hsupa",
		.value = "4094,87380,262144,4096,16384,262144",
	},
	{
		.key = "net.tcp.buffersize.lte",
		.value = "524288,1048576,2097152,262144,524288,1048576",
	},
	{
		.key = "net.tcp.buffersize.umts",
		.value = "4094,87380,110208,4096,16384,110208",
	},
	{
		.key = "net.tcp.buffersize.wifi",
		.value = "524288,1048576,2097152,262144,524288,1048576",
	},
	{
		.key = "persist.demo.hdmirotationlock",
		.value = "0",
	},
	{
		.key = "persist.service.bdroid.bdaddr",
		.value = "22:22:98:4b:33:1a",
	},
	{
		.key = "persist.sys.country",
		.value = "US",
	},
	{
		.key = "persist.sys.dalvik.vm.lib",
		.value = "libdvm.so",
	},
	{
		.key = "persist.sys.language",
		.value = "en",
	},
	{
		.key = "persist.sys.plimit",
		.value = "0",
	},
	{
		.key = "persist.sys.profiler_ms",
		.value = "0",
	},
	{
		.key = "persist.sys.strictmode.disable",
		.value = "1",
	},
	{
		.key = "persist.sys.strictmode.visual",
		.value = "0",
	},
	{
		.key = "persist.sys.timezone",
		.value = "Europe/London",
	},
	{
		.key = "persist.sys.usb.config",
		.value = "mass_storage,adb",
	},
	{
		.key = "ril.sw.modem.status",
		.value = "off",
	},
	{
		.key = "ro.allow.mock.location",
		.value = "1",
	},
	{
		.key = "ro.baseband",
		.value = "unknown",
	},
	{
		.key = "ro.board.platform",
		.value = "polaris",
	},
	{
		.key = "ro.boot.signature",
		.value = "null",
	},
	{
		.key = "ro.bootloader",
		.value = "unknown",
	},
	{
		.key = "ro.bootmode",
		.value = "unknown",
	},
	{
		.key = "ro.bt.bdaddr_path",
		.value = "/data/misc/bluetooth/bdaddr",
	},
	{
		.key = "ro.build.characteristics",
		.value = "tablet",
	},
	{
		.key = "ro.build.date.utc",
		.value = "1447315661",
	},
	{
		.key = "ro.build.date",
		.value = "2015xC4xEA 11xD4xC2 12xC8xD5 xD0xC7xC6xDAxCBxC4 16:07:41 CST",
	},
	{
		.key = "ro.build.description",
		.value = "astar_y3-eng 4.4.2 KVT49L 20151112 test-keys",
	},
	{
		.key = "ro.build.display.id",
		.value = "astar_y3-eng 4.4.2 KVT49L 20151112 test-keys",
	},
	{
		.key = "ro.build.fingerprint",
		.value = "Allwinner/astar_y3/astar-y3:4.4.2/KVT49L/20151112:eng/test-keys",
	},
	{
		.key = "ro.build.host",
		.value = "Android",
	},
	{
		.key = "ro.build.id",
		.value = "KVT49L",
	},
	{
		.key = "ro.build.product",
		.value = "astar-y3",
	},
	{
		.key = "ro.build.tags",
		.value = "test-keys",
	},
	{
		.key = "ro.build.type",
		.value = "eng",
	},
	{
		.key = "ro.build.user",
		.value = "ytx",
	},
	{
		.key = "ro.build.version.codename",
		.value = "REL",
	},
	{
		.key = "ro.build.version.incremental",
		.value = "20151112",
	},
	{
		.key = "ro.build.version.release",
		.value = "4.4.2",
	},
	{
		.key = "ro.build.version.sdk",
		.value = "19",
	},
	{
		.key = "ro.carrier",
		.value = "unknown",
	},
	{
		.key = "ro.com.android.dateformat",
		.value = "MM-dd-yyyy",
	},
	{
		.key = "ro.com.google.gmsversion",
		.value = "4.4_r3",
	},
	{
		.key = "ro.config.alarm_alert",
		.value = "Alarm_Classic.ogg",
	},
	{
		.key = "ro.config.low_ram",
		.value = "false",
	},
	{
		.key = "ro.config.notification_sound",
		.value = "pixiedust.ogg",
	},
	{
		.key = "ro.config.ringtone",
		.value = "Ring_Synth_04.ogg",
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
		.key = "ro.debuggable",
		.value = "1",
	},
	{
		.key = "ro.factorytest",
		.value = "0",
	},
	{
		.key = "ro.font.scale",
		.value = "1.15",
	},
	{
		.key = "ro.hardware",
		.value = "sun8i",
	},
	{
		.key = "ro.hwa.force",
		.value = "false",
	},
	{
		.key = "ro.kernel.android.checkjni",
		.value = "0",
	},
	{
		.key = "ro.opengles.version",
		.value = "131072",
	},
	{
		.key = "ro.product.8723b_bt.used",
		.value = "true",
	},
	{
		.key = "ro.product.board",
		.value = "exdroid",
	},
	{
		.key = "ro.product.brand",
		.value = "Allwinner",
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
		.key = "ro.product.device",
		.value = "astar-y3",
	},
	{
		.key = "ro.product.firmware",
		.value = "v2.0",
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
		.value = "softwinner",
	},
	{
		.key = "ro.product.model",
		.value = "V11",
	},
	{
		.key = "ro.product.name",
		.value = "astar_y3",
	},
	{
		.key = "ro.reversion.aw_sdk_tag",
		.value = "exdroid4.4.2_r2-a33-v2.0",
	},
	{
		.key = "ro.revision",
		.value = "0",
	},
	{
		.key = "ro.runtime.firstboot",
		.value = "1511831430327",
	},
	{
		.key = "ro.secure",
		.value = "0",
	},
	{
		.key = "ro.serialno",
		.value = "86441af7d7f700000000",
	},
	{
		.key = "ro.setupwizard.mode",
		.value = "OPTIONAL",
	},
	{
		.key = "ro.sf.lcd_density",
		.value = "160",
	},
	{
		.key = "ro.sw.embeded.telephony",
		.value = "false",
	},
	{
		.key = "ro.sys.bootfast",
		.value = "true",
	},
	{
		.key = "ro.sys.cputype",
		.value = "QuadCore-A33",
	},
	{
		.key = "ro.sys.mutedrm",
		.value = "true",
	},
	{
		.key = "ro.sys.network_location",
		.value = "true",
	},
	{
		.key = "ro.udisk.lable",
		.value = "Polaris",
	},
	{
		.key = "ro.wifi.channels",
		.value = "",
	},
	{
		.key = "ro.zygote.disable_gl_preload",
		.value = "true",
	},
	{
		.key = "rw.logger",
		.value = "0",
	},
	{
		.key = "service.bootanim.exit",
		.value = "0",
	},
	{
		.key = "sys.boost_up_perf.displays",
		.value = "1",
	},
	{
		.key = "sys.boost_up_perf.mode",
		.value = "mode_normal 0 1",
	},
	{
		.key = "sys.boot_completed",
		.value = "1",
	},
	{
		.key = "sys.forcegles",
		.value = "0",
	},
	{
		.key = "sys.lights_leds",
		.value = "1",
	},
	{
		.key = "sys.mem.opt",
		.value = "false",
	},
	{
		.key = "sys.sensors",
		.value = "1",
	},
	{
		.key = "sys.shutdown_animation",
		.value = "boot",
	},
	{
		.key = "sys.sysctl.extra_free_kbytes",
		.value = "7200",
	},
	{
		.key = "sys.usb.config",
		.value = "mass_storage,adb",
	},
	{
		.key = "sys.usb.state",
		.value = "mass_storage,adb",
	},
	{
		.key = "system_init.startsurfaceflinger",
		.value = "0",
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
		.key = "wifi.supplicant_scan_interval",
		.value = "15",
	},
	{
		.key = "wlan.driver.status",
		.value = "ok",
	},
	{NULL},
};
#endif /* __ANDROID__ */
