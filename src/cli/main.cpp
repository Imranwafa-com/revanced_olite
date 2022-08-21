// Includes
#include <iostream>

#include <fstream>

#include <string>

#include <map>
 // pre-set vars
char data_dump;
int commands_found = 0;
std::map < std::string
const, int > sector_intregrations = {
        {
                "general-resource-ads",
                0
        },
        {
                "general-ads",
                0
        },
        {
                "video-ads",
                0
        },
        {
                "general-reddit-ads",
                0
        },
        {
                "timeline-ads",
                0
        },
        {
                "amoled",
                0
        },
        {
                "settings",
                0
        },
        {
                "premium-heading",
                0
        },
        {
                "custom-branding",
                0
        },
        {
                "seekbar-tapping",
                0
        },
        {
                "minimized-playback",
                0
        },
        {
                "compact-header",
                0
        },
        {
                "hdr-max-brightness",
                0
        },
        {
                "hdr-auto-brightness",
                0
        },
        {
                "hide-watermark",
                0
        },
        {
                "hide-get-premium",
                0
        },
        {
                "enable-wide-searchbar",
                0
        },
        {
                "custom-playback-speed",
                0
        },
        {
                "custom-video-buffer",
                0
        },
        {
                "exclusive-audio-playback",
                0
        },
        {
                "swipe-controls",
                0
        },
        {
                "autorepeat-by-default",
                0
        },
        {
                "old-quality-layout",
                0
        },
        {
                "remember-video-quality",
                0
        },
        {
                "sponsorblock",
                0
        },
        {
                "channel-guidelines",
                0
        },
        {
                "return-youtube-dislike",
                0
        },
        {
                "disable-fullscreen-panels",
                0
        },
        {
                "disable-shorts-button",
                0
        },
        {
                "disable-create-button",
                0
        },
        {
                "disable-autoplay-button",
                0
        },
        {
                "hide-cast-button",
                0
        },
        {
                "hidenfocard-suggestions",
                0
        },
        {
                "hide-reels",
                0
        },
        {
                "force-vp9-codec",
                0
        },
        {
                "enable-debugging",
                0
        },
        {
                "locale-config-fix",
                0
        },
        {
                "resourced-mapping-provider-resource-patch-dependency",
                0
        },
        {
                "microg-support",
                0
        }
};
char
const all[1111] = "java -jar revanvedcli.jar -a youtube.apk -c -o revanced.apk -b patches.jar -m integrations.apk -i general-resource-ads -i general-ads -i video-ads -i general-reddit-ads -i timeline-ads -i amoled -i settings -i premium-heading -i custom-branding -i seekbar-tapping -i minimized-playback -i compact-header -i hdr-max-brightness -i hdr-auto-brightness -i hide-watermark -i hide-get-premium -i enable-wide-searchbar -i custom-playback-speed -i custom-video-buffer -i exclusive-audio-playback -i swipe-controls -i autorepeat-by-default -i old-quality-layout -i remember-video-quality -i sponsorblock -i channel-guidelines -i return-youtube-dislike -i disable-fullscreen-panels -i disable-shorts-button -i disable-create-button -i disable-autoplay-button -i hide-cast-button -i hide-infocard-suggestions -i hide-reels -i force-vp9-codec -i enable-debugging -i locale-config-fix -i resource-id-mapping-provider-resource-patch-dependency -i microg-support -e background-play -e exclusive-audio-playback -e codecs-unlock -e upgrade-button-remover -e tasteBuilder-remover -e upgrade-button-remover --experimental";
char
const sector_start[95] = "java -jar revanvedcli.jar -a youtube.apk -c -o revanced.apk -b patches.jar -m integrations.apk";
char
const sector_end[160] = " -e background-play -e exclusive-audio-playback -e codecs-unlock -e upgrade-button-remover -e tasteBuilder-remover -e upgrade-button-remover --experimental";
//Functions 
int complier(char ** argv, int argc) {
        std::cout << "complier\n\tNumber of complier args: " << (argc - 2) << std::endl; // delete this later
        for (int i = 0; i < (argc); i++) {
                for (auto & x: sector_intregrations) {
                        if (std::string(argv[i]) == x.first) {
                                x.second = 1;
                                commands_found++;
                        }
                }
        }
        for (auto & x: sector_intregrations) {
                if (x.second == 1) {
                        std::cout << "Mapped " << x.first << " to true" << std::endl;
                }
        }
        if (((argc - 2) - commands_found) != 0) {
                std::cout << ((argc - 2) - commands_found) << " extra arguments found\n enter to proceed" << std::endl;
                std::cin >> data_dump;
        }
        return 0;
}

// main
int main(int argc, char * argv[]) {
        if (argc < 1) {
                std::cout << "in-app complier" << std::endl;
        } else if (argc >= 1) {
                char
                const list[770] = "general-resource-ads,\ngeneral-ads,\nvideo-ads,\ngeneral-reddit-ads,\ntimeline-ads,\namoled,\nsettings,\npremium-heading,\ncustom-branding,\nseekbar-tapping,\nminimized-playback,\ncompact-header,\nhdr-max-brightness,\nhdr-auto-brightness,\nhide-watermark,\nhide-get-premium,\nenable-wide-searchbar,\ncustom-playback-speed,\ncustom-video-buffer,\nexclusive-audio-playback,\nswipe-controls,\nautorepeat-by-default,\nold-quality-layout,\nremember-video-quality,\nsponsorblock,\nchannel-guidelines,\nreturn-youtube-dislike,\ndisable-fullscreen-panels,\ndisable-shorts-button,\ndisable-create-button,\ndisable-autoplay-button,\nhide-cast-button,\nhidenfocard-suggestions,\nhide-reels,\nforce-vp9-codec,\nenable-debugging,\nlocale-config-fix,\nresourced-mapping-provider-resource-patch-dependency,\nmicrog-support";
                std::cout << "in arg mode" << std::endl;
                if (std::string(argv[1]) == "--help") {
                        std::cout << "options \n\t --help -h       : displays this message\n\t --full          : does the install with all settings\n\t --list -l       : lists all possible integrations\n\t --verbose {opt} : \n\t --compile(r) -c :" << std::endl;
                } else if (std::string(argv[1]) == "-h") {
                        std::cout << "options \n\t --help -h       : displays this message\n\t --full          : does the install with all settings\n\t --list -l       : lists all possible integrations\n\t --verbose {opt} : \n\t --compile(r) -c :" << std::endl;
                } else if (std::string(argv[1]) == "-l") {
                        std::cout << list << std::endl;
                } else if (std::string(argv[1]) == "--list") {
                        std::cout << list << std::endl;
                } else if (std::string(argv[1]) == "--verbose") {
                        if (std::string(argv[2]) == "print_map") {
                                for (const auto & x: sector_intregrations) {
                                        std::cout << x.first << ": " << x.second << "\n";
                                }
                        }
                } else if (std::string(argv[1]) == "--complie") {
                        complier(argv, argc);
                }
        } else if (std::string(argv[1]) == "--complier") {
                complier(argv, argc);
        }
        return 0;
}