// Includes
#include <iostream>
#include <fstream>
#include <string>
// pre-set vars

char const all[1100]="java -jar rvcli.jar -a youtube.apk -c -o revanced.apk -b patches.jar -m integrations.apk -i general-resource-ads -i general-ads -i video-ads -i general-reddit-ads -i timeline-ads -i amoled -i settings -i premium-heading -i custom-branding -i seekbar-tapping -i minimized-playback -i compact-header -i hdr-max-brightness -i hdr-auto-brightness -i hide-watermark -i hide-get-premium -i enable-wide-searchbar -i custom-playback-speed -i custom-video-buffer -i exclusive-audio-playback -i swipe-controls -i autorepeat-by-default -i old-quality-layout -i remember-video-quality -i sponsorblock -i channel-guidelines -i return-youtube-dislike -i disable-fullscreen-panels -i disable-shorts-button -i disable-create-button -i disable-autoplay-button -i hide-cast-button -i hide-infocard-suggestions -i hide-reels -i force-vp9-codec -i enable-debugging -i locale-config-fix -i resource-id-mapping-provider-resource-patch-dependency -i microg-support -e background-play -e exclusive-audio-playback -e codecs-unlock -e upgrade-button-remover -e tasteBuilder-remover -e upgrade-button-remover --experimental";
//Functions 
int complier(char **argv){
    
    return 0;
}



// main
int main(int argc, char *argv[]){
    if(argc < 1) {
        std::cout << "in-app complier" << std::endl;
    }
    else if (argc >= 1){
        char const list[770]="general-resource-ads,\ngeneral-ads,\nvideo-ads,\ngeneral-reddit-ads,\ntimeline-ads,\namoled,\nsettings,\npremium-heading,\ncustom-branding,\nseekbar-tapping,\nminimized-playback,\ncompact-header,\nhdr-max-brightness,\nhdr-auto-brightness,\nhide-watermark,\nhide-get-premium,\nenable-wide-searchbar,\ncustom-playback-speed,\ncustom-video-buffer,\nexclusive-audio-playback,\nswipe-controls,\nautorepeat-by-default,\nold-quality-layout,\nremember-video-quality,\nsponsorblock,\nchannel-guidelines,\nreturn-youtube-dislike,\ndisable-fullscreen-panels,\ndisable-shorts-button,\ndisable-create-button,\ndisable-autoplay-button,\nhide-cast-button,\nhidenfocard-suggestions,\nhide-reels,\nforce-vp9-codec,\nenable-debugging,\nlocale-config-fix,\nresourced-mapping-provider-resource-patch-dependency,\nmicrog-support";
        std::cout << "in arg mode" << std::endl;
        if (std::string(argv[1]) == "--help"){
            std::cout << "options \n\t --help -h : displays this message\n\t --full    : does the install with all settings\n\t --list -l : lists all possible integrations" << std::endl;
        }
        else if (std::string(argv[1]) == "-h"){
            std::cout << "options \n\t --help -h : displays this message\n\t --full    : does the install with all settings\n\t --list -l : lists all possible integrations" << std::endl;
        }
        else if (std::string(argv[1]) == "-l"){
            std::cout << list << std::endl;
        }
        else if (std::string(argv[1]) == "--list"){
            std::cout << list << std::endl;
    }
    }
    
    return 0;
}