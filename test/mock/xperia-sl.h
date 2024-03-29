struct cpuinfo_mock_file filesystem[] = {
	{
		.path = "/proc/cpuinfo",
		.size = 287,
		.content = "Processor\t: ARMv7 Processor rev 4 (v7l)\n"
			   "processor\t: 0\n"
			   "BogoMIPS\t: 13.52\n"
			   "\n"
			   "Features\t: swp half thumb fastmult vfp edsp neon vfpv3 tls \n"
			   "CPU implementer\t: 0x51\n"
			   "CPU architecture: 7\n"
			   "CPU variant\t: 0x0\n"
			   "CPU part\t: 0x02d\n"
			   "CPU revision\t: 4\n"
			   "\n"
			   "Hardware\t: fuji\n"
			   "Revision\t: 0000\n"
			   "Serial\t\t: 0000000000000000\n",
	},
	{
		.path = "/system/build.prop",
		.size = 5752,
		.content =
			"##### Merging of the /util/data/semc_kernel_time_stamp.prop file #####\n"
			"ro.build.date=Mon Jul 30 13:29:45 2012\n"
			"ro.build.date.utc=1343622585\n"
			"ro.build.user=BuildUser\n"
			"ro.build.host=BuildHost\n"
			"\n"
			"##### Final patch of properties #####\n"
			"ro.build.product=LT26ii\n"
			"ro.build.description=LT26ii-user 4.0.4 6.1.A.2.50 zfd_zw test-keys\n"
			"\n"
			"ro.product.brand=SEMC\n"
			"ro.product.name=LT26ii_1266-8947\n"
			"ro.product.device=LT26ii\n"
			"ro.build.tags=release-keys\n"
			"ro.build.fingerprint=SEMC/LT26ii_1266-8947/LT26ii:4.0.4/6.1.A.2.50/zfd_zw:user/release-keys\n"
			"\n"
			"\n"
			"      ######################## Customized property values #########################\n"
			"      \n"
			"ro.semc.version.cust=1266-8947\n"
			"ro.semc.version.cust_revision=R3G\n"
			"ro.product.locale.excluded=he_IL iw_IL ar_IL\n"
			"      #########################################################################\n"
			"      \n"
			"\n"
			"ro.config.ringtone=xperia.ogg\n"
			"ro.config.notification_sound=notification.ogg\n"
			"ro.config.alarm_alert=alarm.ogg\n"
			"ro.semc.content.number=PA4\n"
			"\n"
			"################# Updating of the SW Version #################\n"
			"ro.semc.version.fs_revision=6.1.A.2.50\n"
			"ro.build.id=6.1.A.2.50\n"
			"ro.build.display.id=6.1.A.2.50\n"
			"\n"
			"##### Values from product package metadata #####\n"
			"ro.semc.product.model=LT26ii\n"
			"ro.semc.ms_type_id=AAD-3880120-CV\n"
			"ro.semc.version.fs=WORLD\n"
			"ro.semc.product.name=Xperia SL\n"
			"ro.semc.product.device=LT26ii\n"
			"ro.product.model=LT26ii\n"
			"\n"
			"# begin build properties\n"
			"# autogenerated by buildinfo.sh\n"
			"ro.build.version.incremental=zfd_zw\n"
			"ro.build.version.sdk=15\n"
			"ro.build.version.codename=REL\n"
			"ro.build.version.release=4.0.4\n"
			"ro.build.type=user\n"
			"ro.product.board=MSM8660_SURF\n"
			"ro.product.cpu.abi=armeabi-v7a\n"
			"ro.product.cpu.abi2=armeabi\n"
			"ro.product.manufacturer=Sony Ericsson\n"
			"ro.product.locale.language=en\n"
			"ro.product.locale.region=US\n"
			"ro.wifi.channels=\n"
			"ro.board.platform=msm8660\n"
			"# ro.build.product is obsolete; use ro.product.device\n"
			"# Do not try to parse ro.build.description or .fingerprint\n"
			"ro.build.characteristics=nosdcard\n"
			"# end build properties\n"
			"#\n"
			"# system.prop for surf\n"
			"#\n"
			"\n"
			"# Notify the system that the RIL only signals once\n"
			"ro.telephony.call_ring.multiple=false\n"
			"\n"
			"rild.libpath=/system/lib/libril-qc-qmi-1.so\n"
			"rild.libargs=-d /dev/smd0\n"
			"persist.rild.nitz_plmn=\n"
			"persist.rild.nitz_long_ons_0=\n"
			"persist.rild.nitz_long_ons_1=\n"
			"persist.rild.nitz_long_ons_2=\n"
			"persist.rild.nitz_long_ons_3=\n"
			"persist.rild.nitz_short_ons_0=\n"
			"persist.rild.nitz_short_ons_1=\n"
			"persist.rild.nitz_short_ons_2=\n"
			"persist.rild.nitz_short_ons_3=\n"
			"DEVICE_PROVISIONED=1\n"
			"debug.sf.hw=1\n"
			"debug.composition.type=dyn\n"
			"ro.sf.compbypass.enable=1\n"
			"\n"
			"wifi.interface=wlan0\n"
			"wifi.supplicant_scan_interval=15\n"
			"\n"
			"# System props for SOLS\n"
			"ro.semc.sols.product-code=116\n"
			"ro.semc.sols.company-code=5\n"
			"\n"
			"#\n"
			"# system props for the cne module\n"
			"#\n"
			"persist.cne.UseCne=false\n"
			"persist.cne.bat.range.low.med=30\n"
			"persist.cne.bat.range.med.high=60\n"
			"persist.cne.loc.policy.op=/system/etc/OperatorPolicy.xml\n"
			"persist.cne.loc.policy.user=/system/etc/UserPolicy.xml\n"
			"persist.cne.bwbased.rat.sel=false\n"
			"persist.cne.snsr.based.rat.mgt=false\n"
			"persist.cne.bat.based.rat.mgt=false\n"
			"persist.cne.be.ge.sqi.min=0\n"
			"persist.cne.be.ge.sqi.max=100\n"
			"persist.cne.be.umts.sqi.min=0\n"
			"persist.cne.be.umts.sqi.max=100\n"
			"persist.cne.be.hspa.sqi.min=0\n"
			"persist.cne.be.hspa.sqi.max=100\n"
			"persist.cne.be.1x.sqi.min=0\n"
			"persist.cne.be.1x.sqi.max=100\n"
			"persist.cne.be.do.sqi.min=0\n"
			"persist.cne.be.do.sqi.max=100\n"
			"persist.cne.be.wlan.sqi.min=0\n"
			"persist.cne.be.wlan.sqi.max=100\n"
			"ro.hdmi.enable=true\n"
			"lpa.decode=false\n"
			"\n"
			"#system props for the MM modules\n"
			"\n"
			"media.stagefright.enable-player=true\n"
			"media.stagefright.enable-http=true\n"
			"\n"
			"#\n"
			"# system props for the data modules\n"
			"#\n"
			"ro.use_data_netmgrd=true\n"
			"persist.data_netmgrd_nint=3\n"
			"\n"
			"#system props for time-services\n"
			"persist.timed.enable=true\n"
			"\n"
			"# System props for audio\n"
			"persist.audio.fluence.mode=endfire\n"
			"persist.audio.vr.enable=false\n"
			"persist.audio.hp=true\n"
			"\n"
			"# System prop to select audio resampler quality\n"
			"af.resampler.quality=3\n"
			"\n"
			"#\n"
			"# system prop for opengles version\n"
			"#\n"
			"# 131072 is decimal for 0x20000 to report version 2\n"
			"ro.opengles.version=131072\n"
			"\n"
			"# NFC\n"
			"ro.nfc.on.default=false\n"
			"ro.nfc.se.sim.enable=true\n"
			"ro.nfc.se.smx.enable=false\n"
			"ro.nfc.icon.enable=true\n"
			"ro.nfc.vendor.name=nxp\n"
			"\n"
			"# system props for Battery test in Service menu\n"
			"ro.semc.batt.capacity=1500\n"
			"ro.semc.batt.test.z_threshold=50\n"
			"ro.semc.batt.test.min_level=70\n"
			"\n"
			"# prop to indicate what kind of external memory the product have.\n"
			"ro.semc.product.user_storage=emmc_only\n"
			"ro.build.characteristics=nosdcard\n"
			"\n"
			"# hwui\n"
			"ro.hwui.text_cache_width=2048\n"
			"\n"
			"#Default values/Locales for the hiding languages feature\n"
			"\n"
			"# Properties controlling Qcom performance patches\n"
			"net.webkit.setpri=1\n"
			"net.webkit.cache.mindeadsize=4194304\n"
			"net.webkit.cache.maxdeadsize=4194304\n"
			"net.webkit.cache.size=12582912\n"
			"net.dns.cache_size=512\n"
			"net.dns.cache_ttl=600\n"
			"net.early.sockets=0\n"
			"stathub.pp.prfth=30\n"
			"net.tcp.fin.aggregation=1\n"
			"net.dnshostprio.enable=1\n"
			"net.http.threads=10\n"
			"net.http.idle_cache.size=40\n"
			"net.http.idle_cache.shutdown=true\n"
			"net.nw.cache.prioadvstep=86400000\n"
			"net.nw.cache.weightadvstep=3600000\n"
			"net.nw.cache.orderby=weight\n"
			"stathub.enabled=0\n"
			"\n"
			"#\n"
			"# ADDITIONAL_BUILD_PROPERTIES\n"
			"#\n"
			"ro.product-res-path=framework/SemcGenericUxpRes.apk\n"
			"ro.com.android.dataroaming=false\n"
			"keyguard.no_require_sim=true\n"
			"ro.com.android.dateformat=MM-dd-yyyy\n"
			"ro.vendor.extension_library=/system/lib/libqc-opt.so\n"
			"dalvik.vm.heapstartsize=8m\n"
			"dalvik.vm.heapgrowthlimit=64m\n"
			"dalvik.vm.heapsize=256m\n"
			"ro.setupwizard.mode=DISABLED\n"
			"ro.com.google.gmsversion=4.0_r2\n"
			"ro.com.google.clientidbase=android-sonyericsson\n"
			"ro.sf.lcd_density=320\n"
			"ro.ril.hsxpa=1\n"
			"ro.ril.gprsclass=10\n"
			"ro.semc.xloud.supported=true\n"
			"ro.usb.pid_suffix=169\n"
			"dalvik.vm.dexopt-flags=m=y\n"
			"net.bt.name=Android\n"
			"dalvik.vm.stack-trace-file=/data/anr/traces.txt\n"
			"ro.service.swiqi.supported=true\n"
			"persist.service.swiqi.enable=1\n"
			"ro.drm.active.num=4\n"
			"ro.drm.active.0=marlin,1\n"
			"ro.drm.active.1=playready,1\n"
			"ro.drm.active.2=dtla,1\n"
			"ro.drm.active.3=marlin_import,1\n",
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
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/offline",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpuidle/current_driver",
		.size = 9,
		.content = "msm_idle\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpuidle/current_governor_ro",
		.size = 5,
		.content = "menu\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/affected_cpus",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1674000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "192000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_transition_latency",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/related_cpus",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_available_frequencies",
		.size = 196,
		.content =
			"192000 384000 432000 486000 540000 594000 648000 702000 756000 810000 864000 918000 972000 1026000 1080000 1134000 1188000 1242000 1296000 1350000 1404000 1458000 1512000 1566000 1620000 1674000 \n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_available_governors",
		.size = 55,
		.content = "conservative ondemand userspace powersave performance \n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq",
		.size = 7,
		.content = "384000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_driver",
		.size = 4,
		.content = "msm\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_governor",
		.size = 9,
		.content = "ondemand\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_max_freq",
		.size = 8,
		.content = "1674000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_min_freq",
		.size = 7,
		.content = "384000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/stats/time_in_state",
		.size = 277,
		.content = "192000 1826\n"
			   "384000 33027\n"
			   "432000 82\n"
			   "486000 65\n"
			   "540000 38\n"
			   "594000 34\n"
			   "648000 26\n"
			   "702000 37\n"
			   "756000 30\n"
			   "810000 0\n"
			   "864000 10\n"
			   "918000 5\n"
			   "972000 34\n"
			   "1026000 39\n"
			   "1080000 13\n"
			   "1134000 16\n"
			   "1188000 5\n"
			   "1242000 35\n"
			   "1296000 15\n"
			   "1350000 17\n"
			   "1404000 29\n"
			   "1458000 16\n"
			   "1512000 69\n"
			   "1566000 42\n"
			   "1620000 57\n"
			   "1674000 6928\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/stats/total_trans",
		.size = 4,
		.content = "287\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings_list",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/physical_package_id",
		.size = 3,
		.content = "-1\n",
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
		.key = "DEVICE_PROVISIONED",
		.value = "1",
	},
	{
		.key = "af.resampler.quality",
		.value = "3",
	},
	{
		.key = "camera.0.name",
		.value = "KMO13BS0",
	},
	{
		.key = "camera.1.name",
		.value = "STW01BM0",
	},
	{
		.key = "dalvik.vm.dexopt-flags",
		.value = "m=y",
	},
	{
		.key = "dalvik.vm.heapgrowthlimit",
		.value = "64m",
	},
	{
		.key = "dalvik.vm.heapsize",
		.value = "256m",
	},
	{
		.key = "dalvik.vm.heapstartsize",
		.value = "8m",
	},
	{
		.key = "dalvik.vm.stack-trace-file",
		.value = "/data/anr/traces.txt",
	},
	{
		.key = "debug.composition.type",
		.value = "dyn",
	},
	{
		.key = "debug.sf.hw",
		.value = "1",
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
		.key = "gsm.current.phone-type",
		.value = "1",
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
		.value = "ABSENT",
	},
	{
		.key = "gsm.version.baseband",
		.value = "8660-AAABQOLYM-314010-24",
	},
	{
		.key = "gsm.version.ril-impl",
		.value = "Qualcomm RIL 1.0",
	},
	{
		.key = "hw.actionsafe",
		.value = "5.000000",
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
		.key = "init.svc.cnd",
		.value = "restarting",
	},
	{
		.key = "init.svc.dbus",
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
		.key = "init.svc.fast-dormancy",
		.value = "running",
	},
	{
		.key = "init.svc.fota-snoop",
		.value = "stopped",
	},
	{
		.key = "init.svc.hw_config",
		.value = "stopped",
	},
	{
		.key = "init.svc.iddd",
		.value = "running",
	},
	{
		.key = "init.svc.illumination",
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
		.key = "init.svc.media",
		.value = "running",
	},
	{
		.key = "init.svc.mpdecision",
		.value = "running",
	},
	{
		.key = "init.svc.netd",
		.value = "running",
	},
	{
		.key = "init.svc.netmgrd",
		.value = "running",
	},
	{
		.key = "init.svc.nvimport",
		.value = "stopped",
	},
	{
		.key = "init.svc.qmuxd",
		.value = "running",
	},
	{
		.key = "init.svc.ril-daemon",
		.value = "running",
	},
	{
		.key = "init.svc.rmt_storage",
		.value = "running",
	},
	{
		.key = "init.svc.secchan",
		.value = "running",
	},
	{
		.key = "init.svc.semc-atfwd-d",
		.value = "running",
	},
	{
		.key = "init.svc.servicemanager",
		.value = "running",
	},
	{
		.key = "init.svc.setssflagbc",
		.value = "stopped",
	},
	{
		.key = "init.svc.suntrold",
		.value = "stopped",
	},
	{
		.key = "init.svc.surfaceflinger",
		.value = "running",
	},
	{
		.key = "init.svc.ta_rmt_service",
		.value = "running",
	},
	{
		.key = "init.svc.tad",
		.value = "running",
	},
	{
		.key = "init.svc.thermald",
		.value = "running",
	},
	{
		.key = "init.svc.time_daemon",
		.value = "running",
	},
	{
		.key = "init.svc.updatemiscta",
		.value = "stopped",
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
		.key = "lpa.decode",
		.value = "false",
	},
	{
		.key = "media.stagefright.enable-http",
		.value = "true",
	},
	{
		.key = "media.stagefright.enable-player",
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
		.key = "net.dns.cache_size",
		.value = "512",
	},
	{
		.key = "net.dns.cache_ttl",
		.value = "600",
	},
	{
		.key = "net.dnshostprio.enable",
		.value = "1",
	},
	{
		.key = "net.early.sockets",
		.value = "0",
	},
	{
		.key = "net.hostname",
		.value = "android-94c3dc588a3da421",
	},
	{
		.key = "net.http.idle_cache.shutdown",
		.value = "true",
	},
	{
		.key = "net.http.idle_cache.size",
		.value = "40",
	},
	{
		.key = "net.http.threads",
		.value = "10",
	},
	{
		.key = "net.nw.cache.orderby",
		.value = "weight",
	},
	{
		.key = "net.nw.cache.prioadvstep",
		.value = "86400000",
	},
	{
		.key = "net.nw.cache.weightadvstep",
		.value = "3600000",
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
		.key = "net.tcp.buffersize.gprs",
		.value = "4092,8760,11680,4096,8760,11680",
	},
	{
		.key = "net.tcp.buffersize.hsdpa",
		.value = "4094,87380,1220608,4096,16384,1220608",
	},
	{
		.key = "net.tcp.buffersize.hspa",
		.value = "4094,87380,1220608,4096,16384,1220608",
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
		.key = "net.tcp.fin.aggregation",
		.value = "1",
	},
	{
		.key = "net.webkit.cache.maxdeadsize",
		.value = "4194304",
	},
	{
		.key = "net.webkit.cache.mindeadsize",
		.value = "4194304",
	},
	{
		.key = "net.webkit.cache.size",
		.value = "12582912",
	},
	{
		.key = "net.webkit.setpri",
		.value = "1",
	},
	{
		.key = "persist.audio.fluence.mode",
		.value = "endfire",
	},
	{
		.key = "persist.audio.hp",
		.value = "true",
	},
	{
		.key = "persist.audio.vr.enable",
		.value = "false",
	},
	{
		.key = "persist.chargemon.active",
		.value = "1",
	},
	{
		.key = "persist.cne.UseCne",
		.value = "false",
	},
	{
		.key = "persist.cne.bat.based.rat.mgt",
		.value = "false",
	},
	{
		.key = "persist.cne.bat.range.low.med",
		.value = "30",
	},
	{
		.key = "persist.cne.bat.range.med.high",
		.value = "60",
	},
	{
		.key = "persist.cne.be.1x.sqi.max",
		.value = "100",
	},
	{
		.key = "persist.cne.be.1x.sqi.min",
		.value = "0",
	},
	{
		.key = "persist.cne.be.do.sqi.max",
		.value = "100",
	},
	{
		.key = "persist.cne.be.do.sqi.min",
		.value = "0",
	},
	{
		.key = "persist.cne.be.ge.sqi.max",
		.value = "100",
	},
	{
		.key = "persist.cne.be.ge.sqi.min",
		.value = "0",
	},
	{
		.key = "persist.cne.be.hspa.sqi.max",
		.value = "100",
	},
	{
		.key = "persist.cne.be.hspa.sqi.min",
		.value = "0",
	},
	{
		.key = "persist.cne.be.umts.sqi.max",
		.value = "100",
	},
	{
		.key = "persist.cne.be.umts.sqi.min",
		.value = "0",
	},
	{
		.key = "persist.cne.be.wlan.sqi.max",
		.value = "100",
	},
	{
		.key = "persist.cne.be.wlan.sqi.min",
		.value = "0",
	},
	{
		.key = "persist.cne.bwbased.rat.sel",
		.value = "false",
	},
	{
		.key = "persist.cne.loc.policy.op",
		.value = "/system/etc/OperatorPolicy.xml",
	},
	{
		.key = "persist.cne.loc.policy.user",
		.value = "/system/etc/UserPolicy.xml",
	},
	{
		.key = "persist.cne.snsr.based.rat.mgt",
		.value = "false",
	},
	{
		.key = "persist.data_netmgrd_nint",
		.value = "3",
	},
	{
		.key = "persist.radio.adb_log_on",
		.value = "0",
	},
	{
		.key = "persist.rild.nitz_long_ons_0",
		.value = "",
	},
	{
		.key = "persist.rild.nitz_long_ons_1",
		.value = "",
	},
	{
		.key = "persist.rild.nitz_long_ons_2",
		.value = "",
	},
	{
		.key = "persist.rild.nitz_long_ons_3",
		.value = "",
	},
	{
		.key = "persist.rild.nitz_plmn",
		.value = "",
	},
	{
		.key = "persist.rild.nitz_short_ons_0",
		.value = "",
	},
	{
		.key = "persist.rild.nitz_short_ons_1",
		.value = "",
	},
	{
		.key = "persist.rild.nitz_short_ons_2",
		.value = "",
	},
	{
		.key = "persist.rild.nitz_short_ons_3",
		.value = "",
	},
	{
		.key = "persist.service.swiqi.enable",
		.value = "1",
	},
	{
		.key = "persist.sys.boot.sound.volume",
		.value = "0",
	},
	{
		.key = "persist.sys.country",
		.value = "GB",
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
		.value = "Asia/Chongqing",
	},
	{
		.key = "persist.sys.usb.config",
		.value = "mtp,adb",
	},
	{
		.key = "persist.tareset.notfirstboot",
		.value = "1",
	},
	{
		.key = "persist.timed.enable",
		.value = "true",
	},
	{
		.key = "ril.ecclist",
		.value = "911,112,000,08,110,999,118,119",
	},
	{
		.key = "ril.icctype",
		.value = "0",
	},
	{
		.key = "rild.libargs",
		.value = "-d /dev/smd0",
	},
	{
		.key = "rild.libpath",
		.value = "/system/lib/libril-qc-qmi-1.so",
	},
	{
		.key = "ro.allow.mock.location",
		.value = "0",
	},
	{
		.key = "ro.baseband",
		.value = "msm",
	},
	{
		.key = "ro.board.platform",
		.value = "msm8660",
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
		.value = "data/etc/bluetooth_bdaddr",
	},
	{
		.key = "ro.build.characteristics",
		.value = "nosdcard",
	},
	{
		.key = "ro.build.date.utc",
		.value = "1343622585",
	},
	{
		.key = "ro.build.date",
		.value = "Mon Jul 30 13:29:45 2012",
	},
	{
		.key = "ro.build.description",
		.value = "LT26ii-user 4.0.4 6.1.A.2.50 zfd_zw test-keys",
	},
	{
		.key = "ro.build.display.id",
		.value = "6.1.A.2.50",
	},
	{
		.key = "ro.build.fingerprint",
		.value = "SEMC/LT26ii_1266-8947/LT26ii:4.0.4/6.1.A.2.50/zfd_zw:user/release-keys",
	},
	{
		.key = "ro.build.host",
		.value = "BuildHost",
	},
	{
		.key = "ro.build.id",
		.value = "6.1.A.2.50",
	},
	{
		.key = "ro.build.product",
		.value = "LT26ii",
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
		.value = "BuildUser",
	},
	{
		.key = "ro.build.version.codename",
		.value = "REL",
	},
	{
		.key = "ro.build.version.incremental",
		.value = "zfd_zw",
	},
	{
		.key = "ro.build.version.release",
		.value = "4.0.4",
	},
	{
		.key = "ro.build.version.sdk",
		.value = "15",
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
		.key = "ro.com.google.clientidbase",
		.value = "android-sonyericsson",
	},
	{
		.key = "ro.com.google.gmsversion",
		.value = "4.0_r2",
	},
	{
		.key = "ro.config.alarm_alert",
		.value = "alarm.ogg",
	},
	{
		.key = "ro.config.notification_sound",
		.value = "notification.ogg",
	},
	{
		.key = "ro.config.ringtone",
		.value = "xperia.ogg",
	},
	{
		.key = "ro.crypto.fs_flags",
		.value = "0x00000406",
	},
	{
		.key = "ro.crypto.fs_mnt_point",
		.value = "/data",
	},
	{
		.key = "ro.crypto.fs_options",
		.value = "noauto_da_alloc",
	},
	{
		.key = "ro.crypto.fs_real_blkdev",
		.value = "/dev/block/mmcblk0p14",
	},
	{
		.key = "ro.crypto.fs_type",
		.value = "ext4",
	},
	{
		.key = "ro.crypto.state",
		.value = "unsupported",
	},
	{
		.key = "ro.debuggable",
		.value = "0",
	},
	{
		.key = "ro.drm.active.0",
		.value = "marlin,1",
	},
	{
		.key = "ro.drm.active.1",
		.value = "playready,1",
	},
	{
		.key = "ro.drm.active.2",
		.value = "dtla,1",
	},
	{
		.key = "ro.drm.active.3",
		.value = "marlin_import,1",
	},
	{
		.key = "ro.drm.active.num",
		.value = "4",
	},
	{
		.key = "ro.emmc",
		.value = "1",
	},
	{
		.key = "ro.factorytest",
		.value = "0",
	},
	{
		.key = "ro.gps.agps_provider",
		.value = "customized",
	},
	{
		.key = "ro.hardware",
		.value = "semc",
	},
	{
		.key = "ro.hdmi.enable",
		.value = "true",
	},
	{
		.key = "ro.hsdpa_cat",
		.value = "10",
	},
	{
		.key = "ro.hwui.text_cache_width",
		.value = "2048",
	},
	{
		.key = "ro.nfc.icon.enable",
		.value = "true",
	},
	{
		.key = "ro.nfc.on.default",
		.value = "false",
	},
	{
		.key = "ro.nfc.se.sim.enable",
		.value = "true",
	},
	{
		.key = "ro.nfc.se.smx.enable",
		.value = "false",
	},
	{
		.key = "ro.nfc.vendor.name",
		.value = "nxp",
	},
	{
		.key = "ro.opengles.version",
		.value = "131072",
	},
	{
		.key = "ro.product-res-path",
		.value = "framework/SemcGenericUxpRes.apk",
	},
	{
		.key = "ro.product.board",
		.value = "MSM8660_SURF",
	},
	{
		.key = "ro.product.brand",
		.value = "SEMC",
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
		.value = "LT26ii",
	},
	{
		.key = "ro.product.locale.excluded",
		.value = "he_IL iw_IL ar_IL",
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
		.value = "Sony Ericsson",
	},
	{
		.key = "ro.product.model",
		.value = "LT26ii",
	},
	{
		.key = "ro.product.name",
		.value = "LT26ii_1266-8947",
	},
	{
		.key = "ro.revision",
		.value = "0",
	},
	{
		.key = "ro.ril.gprsclass",
		.value = "10",
	},
	{
		.key = "ro.ril.hsxpa",
		.value = "1",
	},
	{
		.key = "ro.runtime.firstboot",
		.value = "1509210743168",
	},
	{
		.key = "ro.secure",
		.value = "1",
	},
	{
		.key = "ro.semc.batt.capacity",
		.value = "1500",
	},
	{
		.key = "ro.semc.batt.test.min_level",
		.value = "70",
	},
	{
		.key = "ro.semc.batt.test.z_threshold",
		.value = "50",
	},
	{
		.key = "ro.semc.content.number",
		.value = "PA4",
	},
	{
		.key = "ro.semc.ms_type_id",
		.value = "AAD-3880120-CV",
	},
	{
		.key = "ro.semc.product.device",
		.value = "LT26ii",
	},
	{
		.key = "ro.semc.product.model",
		.value = "LT26ii",
	},
	{
		.key = "ro.semc.product.name",
		.value = "Xperia SL",
	},
	{
		.key = "ro.semc.product.user_storage",
		.value = "emmc_only",
	},
	{
		.key = "ro.semc.sols.company-code",
		.value = "5",
	},
	{
		.key = "ro.semc.sols.product-code",
		.value = "116",
	},
	{
		.key = "ro.semc.version.cust",
		.value = "1266-8947",
	},
	{
		.key = "ro.semc.version.cust_revision",
		.value = "R3G",
	},
	{
		.key = "ro.semc.version.fs",
		.value = "WORLD",
	},
	{
		.key = "ro.semc.version.fs_revision",
		.value = "6.1.A.2.50",
	},
	{
		.key = "ro.semc.version.sw",
		.value = "1265-3465",
	},
	{
		.key = "ro.semc.version.sw_revision",
		.value = "6.1.A.2.50",
	},
	{
		.key = "ro.semc.version.sw_type",
		.value = "user",
	},
	{
		.key = "ro.semc.version.sw_variant",
		.value = "GENERIC",
	},
	{
		.key = "ro.semc.xloud.supported",
		.value = "true",
	},
	{
		.key = "ro.serialno",
		.value = "BX903BXG41",
	},
	{
		.key = "ro.service.swiqi.supported",
		.value = "true",
	},
	{
		.key = "ro.setupwizard.mode",
		.value = "DISABLED",
	},
	{
		.key = "ro.sf.compbypass.enable",
		.value = "1",
	},
	{
		.key = "ro.sf.lcd_density",
		.value = "320",
	},
	{
		.key = "ro.telephony.call_ring.multiple",
		.value = "false",
	},
	{
		.key = "ro.usb.pid_suffix",
		.value = "169",
	},
	{
		.key = "ro.use_data_netmgrd",
		.value = "true",
	},
	{
		.key = "ro.vendor.extension_library",
		.value = "/system/lib/libqc-opt.so",
	},
	{
		.key = "ro.wifi.channels",
		.value = "",
	},
	{
		.key = "ro.wifi.eap_sim_enabled",
		.value = "true",
	},
	{
		.key = "ro.wifi.wps_enable",
		.value = "true",
	},
	{
		.key = "stathub.enabled",
		.value = "0",
	},
	{
		.key = "stathub.pp.prfth",
		.value = "30",
	},
	{
		.key = "sys.boot_completed",
		.value = "1",
	},
	{
		.key = "sys.media.vdec.sw",
		.value = "0",
	},
	{
		.key = "sys.settings_secure_version",
		.value = "1",
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
	{NULL},
};
#endif /* __ANDROID__ */
