#include <iostream>
#include <filesystem>
#include <fstream>
#include <Windows.h>

int main()
{
    char onetap_path[MAX_PATH];
    int patch_choose = 0, r = 0, g = 0, b = 0, ticks = 0;
    system("title Onetap-Patcher");
    system("mode con cols=85 lines=25");
    std::cout << "Authors: @de0ver, @sleebu, @ey4egky\n";
    std::cout << "Enter path to dll: \n";
    std::cin >> onetap_path;
    if (onetap_path != NULL)
    {
        std::ifstream inputFile(onetap_path, std::ios::binary);
        std::vector < char > fileBytes((std::istreambuf_iterator < char >(inputFile)),
            (std::istreambuf_iterator < char >()));
        if (inputFile)
        {
            std::cout << "Choose patch: \n 1. Menu color\n 2. DT Boost\n 3. OTC3 -> onetap\n";
            std::cin >> patch_choose;

            switch (patch_choose)
            {
            case 1:
                std::cout << "R(0-255) = ";
                std::cin >> r;
                std::cout << "G(0-255) = ";
                std::cin >> g;
                std::cout << "B(0-255) = ";
                std::cin >> b;
                if (r >= 0 && r <= 255 && g >= 0 && g <= 255 && b >= 0 && b <= 255)
                {
                    fileBytes[0x077631] = (byte)r;
                    fileBytes[0x077631 + 1] = (byte)g;
                    fileBytes[0x077631 + 2] = (byte)b;

                    fileBytes[0x077DF0] = (byte)r;
                    fileBytes[0x077DF0 + 1] = (byte)g;
                    fileBytes[0x077DF0 + 2] = (byte)b;

                    fileBytes[0x077EC1] = (byte)r;
                    fileBytes[0x077EC1 + 1] = (byte)g;
                    fileBytes[0x077EC1 + 2] = (byte)b;

                    fileBytes[0x07A217] = (byte)r;
                    fileBytes[0x07A217 + 1] = (byte)g;
                    fileBytes[0x07A217 + 2] = (byte)b;

                    fileBytes[0x07A9CD] = (byte)r;
                    fileBytes[0x07A9CD + 1] = (byte)g;
                    fileBytes[0x07A9CD + 2] = (byte)b;

                    fileBytes[0x0C3C76] = (byte)r;
                    fileBytes[0x0C3C76 + 1] = (byte)g;
                    fileBytes[0x0C3C76 + 2] = (byte)b;

                    fileBytes[0x0C3CA1] = (byte)r;
                    fileBytes[0x0C3CA1 + 1] = (byte)g;
                    fileBytes[0x0C3CA1 + 2] = (byte)b;

                    fileBytes[0x88E880] = (byte)r;
                    fileBytes[0x88E880 + 1] = (byte)g;
                    fileBytes[0x88E880 + 2] = (byte)b;

                    fileBytes[0x88E894] = (byte)r;
                    fileBytes[0x88E894 + 1] = (byte)g;
                    fileBytes[0x88E894 + 2] = (byte)b;

                    fileBytes[0x88E8A8] = (byte)r;
                    fileBytes[0x88E8A8 + 1] = (byte)g;
                    fileBytes[0x88E8A8 + 2] = (byte)b;

                    fileBytes[0x88E8BC] = (byte)r;
                    fileBytes[0x88E8BC + 1] = (byte)g;
                    fileBytes[0x88E8BC + 2] = (byte)b;

                    fileBytes[0x88E8D0] = (byte)r;
                    fileBytes[0x88E8D0 + 1] = (byte)g;
                    fileBytes[0x88E8D0 + 2] = (byte)b;

                    fileBytes[0x88E8E4] = (byte)r;
                    fileBytes[0x88E8E4 + 1] = (byte)g;
                    fileBytes[0x88E8E4 + 2] = (byte)b;

                    fileBytes[0x88E8F8] = (byte)r;
                    fileBytes[0x88E8F8 + 1] = (byte)g;
                    fileBytes[0x88E8F8 + 2] = (byte)b;

                    fileBytes[0x88E90C] = (byte)r;
                    fileBytes[0x88E90C + 1] = (byte)g;
                    fileBytes[0x88E90C + 2] = (byte)b;

                    fileBytes[0x88E920] = (byte)r;
                    fileBytes[0x88E920 + 1] = (byte)g;
                    fileBytes[0x88E920 + 2] = (byte)b;

                    fileBytes[0x88E934] = (byte)r;
                    fileBytes[0x88E934 + 1] = (byte)g;
                    fileBytes[0x88E934 + 2] = (byte)b;

                    fileBytes[0x88E948] = (byte)r;
                    fileBytes[0x88E948 + 1] = (byte)g;
                    fileBytes[0x88E948 + 2] = (byte)b;

                    fileBytes[0x88E95C] = (byte)r;
                    fileBytes[0x88E95C + 1] = (byte)g;
                    fileBytes[0x88E95C + 2] = (byte)b;

                    fileBytes[0x88E970] = (byte)r;
                    fileBytes[0x88E970 + 1] = (byte)g;
                    fileBytes[0x88E970 + 2] = (byte)b;

                    fileBytes[0x88E984] = (byte)r;
                    fileBytes[0x88E984 + 1] = (byte)g;
                    fileBytes[0x88E984 + 2] = (byte)b;

                    fileBytes[0x88E998] = (byte)r;
                    fileBytes[0x88E998 + 1] = (byte)g;
                    fileBytes[0x88E998 + 2] = (byte)b;

                    fileBytes[0x88E9AC] = (byte)r;
                    fileBytes[0x88E9AC + 1] = (byte)g;
                    fileBytes[0x88E9AC + 2] = (byte)b;

                    fileBytes[0x88E9C0] = (byte)r;
                    fileBytes[0x88E9C0 + 1] = (byte)g;
                    fileBytes[0x88E9C0 + 2] = (byte)b;

                    fileBytes[0x88E9D4] = (byte)r;
                    fileBytes[0x88E9D4 + 1] = (byte)g;
                    fileBytes[0x88E9D4 + 2] = (byte)b;

                    fileBytes[0x88E9E8] = (byte)r;
                    fileBytes[0x88E9E8 + 1] = (byte)g;
                    fileBytes[0x88E9E8 + 2] = (byte)b;

                    fileBytes[0x88E9FC] = (byte)r;
                    fileBytes[0x88E9FC + 1] = (byte)g;
                    fileBytes[0x88E9FC + 2] = (byte)b;

                    fileBytes[0x88EA10] = (byte)r;
                    fileBytes[0x88EA10 + 1] = (byte)g;
                    fileBytes[0x88EA10 + 2] = (byte)b;

                    fileBytes[0x88EA24] = (byte)r;
                    fileBytes[0x88EA24 + 1] = (byte)g;
                    fileBytes[0x88EA24 + 2] = (byte)b;

                    fileBytes[0x88EA38] = (byte)r;
                    fileBytes[0x88EA38 + 1] = (byte)g;
                    fileBytes[0x88EA38 + 2] = (byte)b;

                    fileBytes[0x88EA4C] = (byte)r;
                    fileBytes[0x88EA4C + 1] = (byte)g;
                    fileBytes[0x88EA4C + 2] = (byte)b;

                    fileBytes[0x88EA60] = (byte)r;
                    fileBytes[0x88EA60 + 1] = (byte)g;
                    fileBytes[0x88EA60 + 2] = (byte)b;

                    fileBytes[0x88EA74] = (byte)r;
                    fileBytes[0x88EA74 + 1] = (byte)g;
                    fileBytes[0x88EA74 + 2] = (byte)b;

                    fileBytes[0x88EA88] = (byte)r;
                    fileBytes[0x88EA88 + 1] = (byte)g;
                    fileBytes[0x88EA88 + 2] = (byte)b;

                    fileBytes[0x88EA9C] = (byte)r;
                    fileBytes[0x88EA9C + 1] = (byte)g;
                    fileBytes[0x88EA9C + 2] = (byte)b;

                    fileBytes[0x88EAB0] = (byte)r;
                    fileBytes[0x88EAB0 + 1] = (byte)g;
                    fileBytes[0x88EAB0 + 2] = (byte)b;

                    fileBytes[0x88EAC4] = (byte)r;
                    fileBytes[0x88EAC4 + 1] = (byte)g;
                    fileBytes[0x88EAC4 + 2] = (byte)b;

                    fileBytes[0x88EAD8] = (byte)r;
                    fileBytes[0x88EAD8 + 1] = (byte)g;
                    fileBytes[0x88EAD8 + 2] = (byte)b;

                    fileBytes[0x88EAEC] = (byte)r;
                    fileBytes[0x88EAEC + 1] = (byte)g;
                    fileBytes[0x88EAEC + 2] = (byte)b;

                    fileBytes[0x88EB00] = (byte)r;
                    fileBytes[0x88EB00 + 1] = (byte)g;
                    fileBytes[0x88EB00 + 2] = (byte)b;

                    fileBytes[0x88EB14] = (byte)r;
                    fileBytes[0x88EB14 + 1] = (byte)g;
                    fileBytes[0x88EB14 + 2] = (byte)b;

                    fileBytes[0x88EB28] = (byte)r;
                    fileBytes[0x88EB28 + 1] = (byte)g;
                    fileBytes[0x88EB28 + 2] = (byte)b;

                    fileBytes[0x88EB3C] = (byte)r;
                    fileBytes[0x88EB3C + 1] = (byte)g;
                    fileBytes[0x88EB3C + 2] = (byte)b;

                    fileBytes[0x88EB50] = (byte)r;
                    fileBytes[0x88EB50 + 1] = (byte)g;
                    fileBytes[0x88EB50 + 2] = (byte)b;

                    fileBytes[0x88EB64] = (byte)r;
                    fileBytes[0x88EB64 + 1] = (byte)g;
                    fileBytes[0x88EB64 + 2] = (byte)b;

                    fileBytes[0x88EB78] = (byte)r;
                    fileBytes[0x88EB78 + 1] = (byte)g;
                    fileBytes[0x88EB78 + 2] = (byte)b;

                    fileBytes[0x88EB8C] = (byte)r;
                    fileBytes[0x88EB8C + 1] = (byte)g;
                    fileBytes[0x88EB8C + 2] = (byte)b;

                    fileBytes[0x88EBA0] = (byte)r;
                    fileBytes[0x88EBA0 + 1] = (byte)g;
                    fileBytes[0x88EBA0 + 2] = (byte)b;

                    fileBytes[0x88EBB4] = (byte)r;
                    fileBytes[0x88EBB4 + 1] = (byte)g;
                    fileBytes[0x88EBB4 + 2] = (byte)b;

                    fileBytes[0x88EBC8] = (byte)r;
                    fileBytes[0x88EBC8 + 1] = (byte)g;
                    fileBytes[0x88EBC8 + 2] = (byte)b;

                    fileBytes[0x88EBDC] = (byte)r;
                    fileBytes[0x88EBDC + 1] = (byte)g;
                    fileBytes[0x88EBDC + 2] = (byte)b;

                    fileBytes[0x88EBF0] = (byte)r;
                    fileBytes[0x88EBF0 + 1] = (byte)g;
                    fileBytes[0x88EBF0 + 2] = (byte)b;

                    fileBytes[0x88EC04] = (byte)r;
                    fileBytes[0x88EC04 + 1] = (byte)g;
                    fileBytes[0x88EC04 + 2] = (byte)b;

                    fileBytes[0x88EC18] = (byte)r;
                    fileBytes[0x88EC18 + 1] = (byte)g;
                    fileBytes[0x88EC18 + 2] = (byte)b;

                    fileBytes[0x88EC2C] = (byte)r;
                    fileBytes[0x88EC2C + 1] = (byte)g;
                    fileBytes[0x88EC2C + 2] = (byte)b;

                    fileBytes[0x88EC40] = (byte)r;
                    fileBytes[0x88EC40 + 1] = (byte)g;
                    fileBytes[0x88EC40 + 2] = (byte)b;

                    fileBytes[0x88EC54] = (byte)r;
                    fileBytes[0x88EC54 + 1] = (byte)g;
                    fileBytes[0x88EC54 + 2] = (byte)b;

                    fileBytes[0x88EC68] = (byte)r;
                    fileBytes[0x88EC68 + 1] = (byte)g;
                    fileBytes[0x88EC68 + 2] = (byte)b;

                    fileBytes[0x88EC7C] = (byte)r;
                    fileBytes[0x88EC7C + 1] = (byte)g;
                    fileBytes[0x88EC7C + 2] = (byte)b;

                    fileBytes[0x88EC90] = (byte)r;
                    fileBytes[0x88EC90 + 1] = (byte)g;
                    fileBytes[0x88EC90 + 2] = (byte)b;

                    fileBytes[0x88ECA4] = (byte)r;
                    fileBytes[0x88ECA4 + 1] = (byte)g;
                    fileBytes[0x88ECA4 + 2] = (byte)b;

                    fileBytes[0x88ECB8] = (byte)r;
                    fileBytes[0x88ECB8 + 1] = (byte)g;
                    fileBytes[0x88ECB8 + 2] = (byte)b;

                    fileBytes[0x88ECCC] = (byte)r;
                    fileBytes[0x88ECCC + 1] = (byte)g;
                    fileBytes[0x88ECCC + 2] = (byte)b;

                    fileBytes[0x88ECE0] = (byte)r;
                    fileBytes[0x88ECE0 + 1] = (byte)g;
                    fileBytes[0x88ECE0 + 2] = (byte)b;

                    fileBytes[0x88ECF4] = (byte)r;
                    fileBytes[0x88ECF4 + 1] = (byte)g;
                    fileBytes[0x88ECF4 + 2] = (byte)b;

                    fileBytes[0x88ED08] = (byte)r;
                    fileBytes[0x88ED08 + 1] = (byte)g;
                    fileBytes[0x88ED08 + 2] = (byte)b;

                    fileBytes[0x88ED1C] = (byte)r;
                    fileBytes[0x88ED1C + 1] = (byte)g;
                    fileBytes[0x88ED1C + 2] = (byte)b;

                    fileBytes[0x88ED30] = (byte)r;
                    fileBytes[0x88ED30 + 1] = (byte)g;
                    fileBytes[0x88ED30 + 2] = (byte)b;

                    fileBytes[0x88ED44] = (byte)r;
                    fileBytes[0x88ED44 + 1] = (byte)g;
                    fileBytes[0x88ED44 + 2] = (byte)b;

                    fileBytes[0x88ED58] = (byte)r;
                    fileBytes[0x88ED58 + 1] = (byte)g;
                    fileBytes[0x88ED58 + 2] = (byte)b;

                    fileBytes[0x88ED6C] = (byte)r;
                    fileBytes[0x88ED6C + 1] = (byte)g;
                    fileBytes[0x88ED6C + 2] = (byte)b;

                    fileBytes[0x88ED80] = (byte)r;
                    fileBytes[0x88ED80 + 1] = (byte)g;
                    fileBytes[0x88ED80 + 2] = (byte)b;

                    fileBytes[0x88ED94] = (byte)r;
                    fileBytes[0x88ED94 + 1] = (byte)g;
                    fileBytes[0x88ED94 + 2] = (byte)b;

                    fileBytes[0x88EDA8] = (byte)r;
                    fileBytes[0x88EDA8 + 1] = (byte)g;
                    fileBytes[0x88EDA8 + 2] = (byte)b;

                    fileBytes[0x88EDBC] = (byte)r;
                    fileBytes[0x88EDBC + 1] = (byte)g;
                    fileBytes[0x88EDBC + 2] = (byte)b;

                    fileBytes[0x88EDD0] = (byte)r;
                    fileBytes[0x88EDD0 + 1] = (byte)g;
                    fileBytes[0x88EDD0 + 2] = (byte)b;

                    fileBytes[0x88EDE4] = (byte)r;
                    fileBytes[0x88EDE4 + 1] = (byte)g;
                    fileBytes[0x88EDE4 + 2] = (byte)b;

                    fileBytes[0x88EDF8] = (byte)r;
                    fileBytes[0x88EDF8 + 1] = (byte)g;
                    fileBytes[0x88EDF8 + 2] = (byte)b;

                    fileBytes[0x88EE0C] = (byte)r;
                    fileBytes[0x88EE0C + 1] = (byte)g;
                    fileBytes[0x88EE0C + 2] = (byte)b;

                    fileBytes[0x88EE20] = (byte)r;
                    fileBytes[0x88EE20 + 1] = (byte)g;
                    fileBytes[0x88EE20 + 2] = (byte)b;

                    fileBytes[0x88EE34] = (byte)r;
                    fileBytes[0x88EE34 + 1] = (byte)g;
                    fileBytes[0x88EE34 + 2] = (byte)b;

                    fileBytes[0x88EE48] = (byte)r;
                    fileBytes[0x88EE48 + 1] = (byte)g;
                    fileBytes[0x88EE48 + 2] = (byte)b;

                    fileBytes[0x88EE5C] = (byte)r;
                    fileBytes[0x88EE5C + 1] = (byte)g;
                    fileBytes[0x88EE5C + 2] = (byte)b;

                    fileBytes[0x88EE68] = (byte)r;
                    fileBytes[0x88EE68 + 1] = (byte)g;
                    fileBytes[0x88EE68 + 2] = (byte)b;

                    fileBytes[0x88EE7C] = (byte)r;
                    fileBytes[0x88EE7C + 1] = (byte)g;
                    fileBytes[0x88EE7C + 2] = (byte)b;

                    fileBytes[0x88EEA4] = (byte)r;
                    fileBytes[0x88EEA4 + 1] = (byte)g;
                    fileBytes[0x88EEA4 + 2] = (byte)b;

                    fileBytes[0x88EEB8] = (byte)r;
                    fileBytes[0x88EEB8 + 1] = (byte)g;
                    fileBytes[0x88EEB8 + 2] = (byte)b;

                    fileBytes[0x88EECC] = (byte)r;
                    fileBytes[0x88EECC + 1] = (byte)g;
                    fileBytes[0x88EECC + 2] = (byte)b;

                    fileBytes[0x88EEE0] = (byte)r;
                    fileBytes[0x88EEE0 + 1] = (byte)g;
                    fileBytes[0x88EEE0 + 2] = (byte)b;

                    fileBytes[0x88EEF4] = (byte)r;
                    fileBytes[0x88EEF4 + 1] = (byte)g;
                    fileBytes[0x88EEF4 + 2] = (byte)b;

                    fileBytes[0x88EF08] = (byte)r;
                    fileBytes[0x88EF08 + 1] = (byte)g;
                    fileBytes[0x88EF08 + 2] = (byte)b;

                    fileBytes[0x88EF1C] = (byte)r;
                    fileBytes[0x88EF1C + 1] = (byte)g;
                    fileBytes[0x88EF1C + 2] = (byte)b;

                    fileBytes[0x88EF30] = (byte)r;
                    fileBytes[0x88EF30 + 1] = (byte)g;
                    fileBytes[0x88EF30 + 2] = (byte)b;

                    fileBytes[0x88EF44] = (byte)r;
                    fileBytes[0x88EF44 + 1] = (byte)g;
                    fileBytes[0x88EF44 + 2] = (byte)b;

                    fileBytes[0x88EF58] = (byte)r;
                    fileBytes[0x88EF58 + 1] = (byte)g;
                    fileBytes[0x88EF58 + 2] = (byte)b;

                    fileBytes[0x88EF6C] = (byte)r;
                    fileBytes[0x88EF6C + 1] = (byte)g;
                    fileBytes[0x88EF6C + 2] = (byte)b;

                    fileBytes[0x88EF80] = (byte)r;
                    fileBytes[0x88EF80 + 1] = (byte)g;
                    fileBytes[0x88EF80 + 2] = (byte)b;

                    fileBytes[0x88EF94] = (byte)r;
                    fileBytes[0x88EF94 + 1] = (byte)g;
                    fileBytes[0x88EF94 + 2] = (byte)b;

                    fileBytes[0x88EFA8] = (byte)r;
                    fileBytes[0x88EFA8 + 1] = (byte)g;
                    fileBytes[0x88EFA8 + 2] = (byte)b;

                    fileBytes[0x88EFBC] = (byte)r;
                    fileBytes[0x88EFBC + 1] = (byte)g;
                    fileBytes[0x88EFBC + 2] = (byte)b;

                    fileBytes[0x88EFD0] = (byte)r;
                    fileBytes[0x88EFD0 + 1] = (byte)g;
                    fileBytes[0x88EFD0 + 2] = (byte)b;

                    fileBytes[0x88EFE4] = (byte)r;
                    fileBytes[0x88EFE4 + 1] = (byte)g;
                    fileBytes[0x88EFE4 + 2] = (byte)b;

                    fileBytes[0x88EFF8] = (byte)r;
                    fileBytes[0x88EFF8 + 1] = (byte)g;
                    fileBytes[0x88EFF8 + 2] = (byte)b;

                    fileBytes[0x88F00C] = (byte)r;
                    fileBytes[0x88F00C + 1] = (byte)g;
                    fileBytes[0x88F00C + 2] = (byte)b;

                    fileBytes[0x88F020] = (byte)r;
                    fileBytes[0x88F020 + 1] = (byte)g;
                    fileBytes[0x88F020 + 2] = (byte)b;

                    fileBytes[0x88F034] = (byte)r;
                    fileBytes[0x88F034 + 1] = (byte)g;
                    fileBytes[0x88F034 + 2] = (byte)b;

                    fileBytes[0x88F048] = (byte)r;
                    fileBytes[0x88F048 + 1] = (byte)g;
                    fileBytes[0x88F048 + 2] = (byte)b;

                    fileBytes[0x88F05C] = (byte)r;
                    fileBytes[0x88F05C + 1] = (byte)g;
                    fileBytes[0x88F05C + 2] = (byte)b;

                    fileBytes[0x88F070] = (byte)r;
                    fileBytes[0x88F070 + 1] = (byte)g;
                    fileBytes[0x88F070 + 2] = (byte)b;

                    fileBytes[0x88F084] = (byte)r;
                    fileBytes[0x88F084 + 1] = (byte)g;
                    fileBytes[0x88F084 + 2] = (byte)b;

                    fileBytes[0x88F098] = (byte)r;
                    fileBytes[0x88F098 + 1] = (byte)g;
                    fileBytes[0x88F098 + 2] = (byte)b;

                    fileBytes[0x88F0AC] = (byte)r;
                    fileBytes[0x88F0AC + 1] = (byte)g;
                    fileBytes[0x88F0AC + 2] = (byte)b;

                    fileBytes[0x88F0C0] = (byte)r;
                    fileBytes[0x88F0C0 + 1] = (byte)g;
                    fileBytes[0x88F0C0 + 2] = (byte)b;

                    fileBytes[0x88F0D4] = (byte)r;
                    fileBytes[0x88F0D4 + 1] = (byte)g;
                    fileBytes[0x88F0D4 + 2] = (byte)b;

                    fileBytes[0x88F0E8] = (byte)r;
                    fileBytes[0x88F0E8 + 1] = (byte)g;
                    fileBytes[0x88F0E8 + 2] = (byte)b;

                    fileBytes[0x88F0FC] = (byte)r;
                    fileBytes[0x88F0FC + 1] = (byte)g;
                    fileBytes[0x88F0FC + 2] = (byte)b;

                    fileBytes[0x88F110] = (byte)r;
                    fileBytes[0x88F110 + 1] = (byte)g;
                    fileBytes[0x88F110 + 2] = (byte)b;

                    fileBytes[0x88F124] = (byte)r;
                    fileBytes[0x88F124 + 1] = (byte)g;
                    fileBytes[0x88F124 + 2] = (byte)b;

                    fileBytes[0x88F138] = (byte)r;
                    fileBytes[0x88F138 + 1] = (byte)g;
                    fileBytes[0x88F138 + 2] = (byte)b;

                    fileBytes[0x88F14C] = (byte)r;
                    fileBytes[0x88F14C + 1] = (byte)g;
                    fileBytes[0x88F14C + 2] = (byte)b;

                    fileBytes[0x88F160] = (byte)r;
                    fileBytes[0x88F160 + 1] = (byte)g;
                    fileBytes[0x88F160 + 2] = (byte)b;

                    fileBytes[0x88F174] = (byte)r;
                    fileBytes[0x88F174 + 1] = (byte)g;
                    fileBytes[0x88F174 + 2] = (byte)b;

                    fileBytes[0x88F188] = (byte)r;
                    fileBytes[0x88F188 + 1] = (byte)g;
                    fileBytes[0x88F188 + 2] = (byte)b;

                    fileBytes[0x88F19C] = (byte)r;
                    fileBytes[0x88F19C + 1] = (byte)g;
                    fileBytes[0x88F19C + 2] = (byte)b;

                    fileBytes[0x88F1B0] = (byte)r;
                    fileBytes[0x88F1B0 + 1] = (byte)g;
                    fileBytes[0x88F1B0 + 2] = (byte)b;

                    fileBytes[0x88F1C4] = (byte)r;
                    fileBytes[0x88F1C4 + 1] = (byte)g;
                    fileBytes[0x88F1C4 + 2] = (byte)b;

                    fileBytes[0x88F1D8] = (byte)r;
                    fileBytes[0x88F1D8 + 1] = (byte)g;
                    fileBytes[0x88F1D8 + 2] = (byte)b;

                    fileBytes[0x88F1EC] = (byte)r;
                    fileBytes[0x88F1EC + 1] = (byte)g;
                    fileBytes[0x88F1EC + 2] = (byte)b;

                    fileBytes[0x88F200] = (byte)r;
                    fileBytes[0x88F200 + 1] = (byte)g;
                    fileBytes[0x88F200 + 2] = (byte)b;

                    fileBytes[0x88F214] = (byte)r;
                    fileBytes[0x88F214 + 1] = (byte)g;
                    fileBytes[0x88F214 + 2] = (byte)b;

                    fileBytes[0x88F228] = (byte)r;
                    fileBytes[0x88F228 + 1] = (byte)g;
                    fileBytes[0x88F228 + 2] = (byte)b;

                    fileBytes[0x88F23C] = (byte)r;
                    fileBytes[0x88F23C + 1] = (byte)g;
                    fileBytes[0x88F23C + 2] = (byte)b;

                    fileBytes[0x88F250] = (byte)r;
                    fileBytes[0x88F250 + 1] = (byte)g;
                    fileBytes[0x88F250 + 2] = (byte)b;

                    fileBytes[0x88F264] = (byte)r;
                    fileBytes[0x88F264 + 1] = (byte)g;
                    fileBytes[0x88F264 + 2] = (byte)b;

                    fileBytes[0x88F278] = (byte)r;
                    fileBytes[0x88F278 + 1] = (byte)g;
                    fileBytes[0x88F278 + 2] = (byte)b;

                    fileBytes[0x88F28C] = (byte)r;
                    fileBytes[0x88F28C + 1] = (byte)g;
                    fileBytes[0x88F28C + 2] = (byte)b;

                    fileBytes[0x88F2A0] = (byte)r;
                    fileBytes[0x88F2A0 + 1] = (byte)g;
                    fileBytes[0x88F2A0 + 2] = (byte)b;

                    fileBytes[0x88F2B4] = (byte)r;
                    fileBytes[0x88F2B4 + 1] = (byte)g;
                    fileBytes[0x88F2B4 + 2] = (byte)b;

                    fileBytes[0x88F2C8] = (byte)r;
                    fileBytes[0x88F2C8 + 1] = (byte)g;
                    fileBytes[0x88F2C8 + 2] = (byte)b;

                    fileBytes[0x88F2DC] = (byte)r;
                    fileBytes[0x88F2DC + 1] = (byte)g;
                    fileBytes[0x88F2DC + 2] = (byte)b;

                    fileBytes[0x88F2F0] = (byte)r;
                    fileBytes[0x88F2F0 + 1] = (byte)g;
                    fileBytes[0x88F2F0 + 2] = (byte)b;

                    fileBytes[0x88F304] = (byte)r;
                    fileBytes[0x88F304 + 1] = (byte)g;
                    fileBytes[0x88F304 + 2] = (byte)b;

                    fileBytes[0x88F318] = (byte)r;
                    fileBytes[0x88F318 + 1] = (byte)g;
                    fileBytes[0x88F318 + 2] = (byte)b;
                }
                break;
            case 2:
                std::cout << "You choosed: 2. DT Boost\n";
                std::cout << " 1. +1 tick\n 2. +2 ticks\n 3. +3 ticks\n";
                std::cin >> ticks;
                for (int i = 0; i < 22; i++)
                {
                    fileBytes[0xDD3D8 + i] = (byte)0x90;
                }
                //fileBytes[0xDD3D6] = (byte)0x2C;
                switch (ticks)
                {
                case 1:
                    fileBytes[0xDD3D8] = (byte)0x40;
                    break;
                case 2:
                    fileBytes[0xDD3D8] = (byte)0x40;
                    fileBytes[0xDD3D8 + 1] = (byte)0x40;
                    break;
                case 3:
                    fileBytes[0xDD3D8] = (byte)0x40;
                    fileBytes[0xDD3D8 + 2] = (byte)0x40;
                    fileBytes[0xDD3D8 + 3] = (byte)0x40;
                    break;
                }
                std::cout << "Done! \n";
                break;
            case 3:
                fileBytes[0x1E81A] = (byte)0x6D;
                fileBytes[0x1E825] = (byte)0x31;
                fileBytes[0x1E7FD] = (byte)0x67;
                fileBytes[0x1E7FD + 1] = (byte)0x76;
                fileBytes[0x1E807] = (byte)0x69;
                fileBytes[0x1E807 + 1] = (byte)0x68;
                fileBytes[0x1E807 + 2] = (byte)0x63;
                fileBytes[0x1E807 + 3] = (byte)0x72;

                std::cout << "Done! \n";
                break;
            default:
                exit(-1);
                break;
            }
            inputFile.close();
            std::ofstream outputFile(onetap_path, std::ios::binary | std::ios::trunc);
            outputFile.write(fileBytes.data(), fileBytes.size());

            outputFile.close();
        }
    }
}