#include "sensitivity-lut.h"
#include <stdint.h>

uint64_t sensitivity_matrix[181][2] = {
	{ 0xc028000000000000ULL, 0x3fbadf3c2af7ead5ULL, },
	{ 0xc027cccccccccccdULL, 0x3fba33d6fe66a6e0ULL, },
	{ 0xc02799999999999aULL, 0x3fb989a42448b927ULL, },
	{ 0xc027666666666666ULL, 0x3fb8e0b421c6ccd6ULL, },
	{ 0xc027333333333333ULL, 0x3fb83917840a0301ULL, },
	{ 0xc027000000000000ULL, 0x3fb792deda96ebdfULL, },
	{ 0xc026cccccccccccdULL, 0x3fb6ee1ab16a7b8aULL, },
	{ 0xc02699999999999aULL, 0x3fb64adb8ada075fULL, },
	{ 0xc026666666666666ULL, 0x3fb5a931d937a689ULL, },
	{ 0xc026333333333333ULL, 0x3fb5092df83ca346ULL, },
	{ 0xc026000000000000ULL, 0x3fb46ae0263bff75ULL, },
	{ 0xc025cccccccccccdULL, 0x3fb3ce587d1f6ae9ULL, },
	{ 0xc02599999999999aULL, 0x3fb333a6eb316718ULL, },
	{ 0xc025666666666666ULL, 0x3fb29adb2bb7b5feULL, },
	{ 0xc025333333333333ULL, 0x3fb20404bf6197b6ULL, },
	{ 0xc025000000000000ULL, 0x3fb16f32e48dc1caULL, },
	{ 0xc024cccccccccccdULL, 0x3fb0dc748f6c66d2ULL, },
	{ 0xc02499999999999aULL, 0x3fb04bd862021149ULL, },
	{ 0xc024666666666666ULL, 0x3faf7ad94821069cULL, },
	{ 0xc024333333333333ULL, 0x3fae627e75d679aaULL, },
	{ 0xc024000000000000ULL, 0x3fad4ebb427b71a8ULL, },
	{ 0xc023cccccccccccdULL, 0x3fac3fa9bd93c4a5ULL, },
	{ 0xc02399999999999aULL, 0x3fab3563004b5fdaULL, },
	{ 0xc023666666666666ULL, 0x3faa2fff1cfe8153ULL, },
	{ 0xc023333333333333ULL, 0x3fa92f950ede7ccdULL, },
	{ 0xc023000000000000ULL, 0x3fa8343aa9c35e0dULL, },
	{ 0xc022cccccccccccdULL, 0x3fa73e048a3b7b90ULL, },
	{ 0xc02299999999999aULL, 0x3fa64d0605eac0bbULL, },
	{ 0xc022666666666666ULL, 0x3fa561511c4c1b6eULL, },
	{ 0xc022333333333333ULL, 0x3fa47af667e80d49ULL, },
	{ 0xc022000000000000ULL, 0x3fa39a051013e17cULL, },
	{ 0xc021cccccccccccdULL, 0x3fa2be8abb4d7295ULL, },
	{ 0xc02199999999999aULL, 0x3fa1e8938247bcc1ULL, },
	{ 0xc021666666666666ULL, 0x3fa11829e3bcaf89ULL, },
	{ 0xc021333333333333ULL, 0x3fa04d56b918ca6bULL, },
	{ 0xc021000000000000ULL, 0x3f9f1042582a0c13ULL, },
	{ 0xc020cccccccccccdULL, 0x3f9d911d5aa6c38eULL, },
	{ 0xc02099999999999aULL, 0x3f9c1d45d8243551ULL, },
	{ 0xc020666666666666ULL, 0x3f9ab4bf9e123260ULL, },
	{ 0xc020333333333333ULL, 0x3f99578add08ffcdULL, },
	{ 0xc020000000000000ULL, 0x3f9805a41f9ced70ULL, },
	{ 0xc01f999999999999ULL, 0x3f96bf0443f2a76bULL, },
	{ 0xc01f333333333333ULL, 0x3f9583a0783430ccULL, },
	{ 0xc01ecccccccccccdULL, 0x3f94536a3a03c178ULL, },
	{ 0xc01e666666666666ULL, 0x3f932e4f5906b389ULL, },
	{ 0xc01e000000000000ULL, 0x3f921439fc9f38f5ULL, },
	{ 0xc01d999999999999ULL, 0x3f910510ace7c559ULL, },
	{ 0xc01d333333333333ULL, 0x3f9000b65efeecdeULL, },
	{ 0xc01cccccccccccccULL, 0x3f8e0e15095beba2ULL, },
	{ 0xc01c666666666666ULL, 0x3f8c2fd23edf0754ULL, },
	{ 0xc01c000000000000ULL, 0x3f8a6655adad39ceULL, },
	{ 0xc01b999999999999ULL, 0x3f88b14a24a1c348ULL, },
	{ 0xc01b333333333333ULL, 0x3f8710542c723bb9ULL, },
	{ 0xc01accccccccccccULL, 0x3f8583124853096eULL, },
	{ 0xc01a666666666666ULL, 0x3f84091d3cedb6a1ULL, },
	{ 0xc01a000000000000ULL, 0x3f82a2085d6f6b7eULL, },
	{ 0xc019999999999999ULL, 0x3f814d61de697239ULL, },
	{ 0xc019333333333333ULL, 0x3f800ab32e314af1ULL, },
	{ 0xc018ccccccccccccULL, 0x3f7db302a4c33115ULL, },
	{ 0xc018666666666666ULL, 0x3f7b729a942277feULL, },
	{ 0xc018000000000000ULL, 0x3f795328e894c9b5ULL, },
	{ 0xc017999999999999ULL, 0x3f7753a1f480c7fdULL, },
	{ 0xc017333333333333ULL, 0x3f7572f479718836ULL, },
	{ 0xc016ccccccccccccULL, 0x3f73b00a88258225ULL, },
	{ 0xc016666666666666ULL, 0x3f7209ca649f9783ULL, },
	{ 0xc016000000000000ULL, 0x3f707f176cf1080aULL, },
	{ 0xc015999999999999ULL, 0x3f6e1da602ce5a23ULL, },
	{ 0xc015333333333333ULL, 0x3f6b6fbad97d6d77ULL, },
	{ 0xc014ccccccccccccULL, 0x3f68f22d95f02040ULL, },
	{ 0xc014666666666666ULL, 0x3f66a2bfdacb8660ULL, },
	{ 0xc014000000000000ULL, 0x3f647f36751ca75bULL, },
	{ 0xc013999999999999ULL, 0x3f62855b10fe79c3ULL, },
	{ 0xc013333333333333ULL, 0x3f60b2fde06d2c80ULL, },
	{ 0xc012ccccccccccccULL, 0x3f5e0bee6351bb2aULL, },
	{ 0xc012666666666666ULL, 0x3f5af851e550a043ULL, },
	{ 0xc012000000000000ULL, 0x3f5827003e83b94fULL, },
	{ 0xc011999999999999ULL, 0x3f5593ec2fbaf769ULL, },
	{ 0xc011333333333333ULL, 0x3f533b23bd6c0919ULL, },
	{ 0xc010ccccccccccccULL, 0x3f5118d273d22bb5ULL, },
	{ 0xc010666666666666ULL, 0x3f4e5286e34fede2ULL, },
	{ 0xc010000000000000ULL, 0x3f4ad1c66dfe4967ULL, },
	{ 0xc00f333333333334ULL, 0x3f47a8826c93651dULL, },
	{ 0xc00e666666666664ULL, 0x3f44d0224c7a8fc4ULL, },
	{ 0xc00d999999999998ULL, 0x3f42425827a72f67ULL, },
	{ 0xc00cccccccccccccULL, 0x3f3ff244d119ac90ULL, },
	{ 0xc00c000000000000ULL, 0x3f3bdd99de07c5baULL, },
	{ 0xc00b333333333334ULL, 0x3f383be370869cb1ULL, },
	{ 0xc00a666666666664ULL, 0x3f3502f21a858280ULL, },
	{ 0xc009999999999998ULL, 0x3f32293277ea3d8fULL, },
	{ 0xc008ccccccccccccULL, 0x3f2f4b57835cec0cULL, },
	{ 0xc008000000000000ULL, 0x3f2adffb1d11708dULL, },
	{ 0xc007333333333334ULL, 0x3f2700b99f7b629aULL, },
	{ 0xc006666666666668ULL, 0x3f239f20346d7da2ULL, },
	{ 0xc00599999999999cULL, 0x3f20add69a7a17ffULL, },
	{ 0xc004ccccccccccccULL, 0x3f1c412aa4df8686ULL, },
	{ 0xc004000000000000ULL, 0x3f17d835a61a2447ULL, },
	{ 0xc003333333333334ULL, 0x3f140c3fd4017fb1ULL, },
	{ 0xc002666666666668ULL, 0x3f10ca96e340b100ULL, },
	{ 0xc00199999999999cULL, 0x3f0c04960a1b55ccULL, },
	{ 0xc000ccccccccccccULL, 0x3f0748291e2cf865ULL, },
	{ 0xc000000000000000ULL, 0x3f03447264f2f4b4ULL, },
	{ 0xbffe666666666668ULL, 0x3effc1c422bcf3ffULL, },
	{ 0xbffcccccccccccd0ULL, 0x3efa0f2ee40baa1eULL, },
	{ 0xbffb333333333334ULL, 0x3ef54a57d0c1b672ULL, },
	{ 0xbff999999999999cULL, 0x3ef150fdf87f44e6ULL, },
	{ 0xbff8000000000000ULL, 0x3eec0a0fbcd3905cULL, },
	{ 0xbff6666666666668ULL, 0x3ee698449b247f80ULL, },
	{ 0xbff4ccccccccccd0ULL, 0x3ee21ec6dbf9360eULL, },
	{ 0xbff3333333333334ULL, 0x3edcebca49d7a1a9ULL, },
	{ 0xbff199999999999cULL, 0x3ed6f6d4730c7281ULL, },
	{ 0xbff0000000000000ULL, 0x3ed22402ef259eacULL, },
	{ 0xbfecccccccccccd0ULL, 0x3ecc829974a7788aULL, },
	{ 0xbfe99999999999a0ULL, 0x3ec6487cffb9bb40ULL, },
	{ 0xbfe6666666666668ULL, 0x3ec1520cc97d4aa4ULL, },
	{ 0xbfe3333333333338ULL, 0x3ebac6576f159816ULL, },
	{ 0xbfe0000000000000ULL, 0x3eb49363b5283f24ULL, },
	{ 0xbfd99999999999a0ULL, 0x3eaf70111c591f04ULL, },
	{ 0xbfd3333333333340ULL, 0x3ea7df50eb4495e6ULL, },
	{ 0xbfc99999999999a0ULL, 0x3ea2040d20fe31dbULL, },
	{ 0xbfb99999999999c0ULL, 0x3e9b055052ee337cULL, },
	{ 0x0ULL, 0x3e9421f5f40d8372ULL, },
	{ 0x3fb9999999999980ULL, 0x3e8dcd90e7b42c85ULL, },
	{ 0x3fc9999999999980ULL, 0x3e85e9050fb03d97ULL, },
	{ 0x3fd3333333333330ULL, 0x3e7ffe31eea9e7bfULL, },
	{ 0x3fd9999999999990ULL, 0x3e773156ac8b50ffULL, },
	{ 0x3fe0000000000000ULL, 0x3e70b10d5b155c34ULL, },
	{ 0x3fe3333333333330ULL, 0x3e67d9106b664ed0ULL, },
	{ 0x3fe6666666666660ULL, 0x3e60e841dfb1a648ULL, },
	{ 0x3fe9999999999998ULL, 0x3e57c99e6737d6c0ULL, },
	{ 0x3fecccccccccccc8ULL, 0x3e5099f100ce8fdfULL, },
	{ 0x3ff0000000000000ULL, 0x3e46fbfb77e99314ULL, },
	{ 0x3ff1999999999998ULL, 0x3e3f8ebba5d80a1dULL, },
	{ 0x3ff3333333333330ULL, 0x3e357b02f2fb96b3ULL, },
	{ 0x3ff4ccccccccccccULL, 0x3e2cfd1eec8f37b5ULL, },
	{ 0x3ff6666666666664ULL, 0x3e23631074d266cfULL, },
	{ 0x3ff8000000000000ULL, 0x3e19b20771af7987ULL, },
	{ 0x3ff9999999999998ULL, 0x3e10deb84ff2f8a6ULL, },
	{ 0x3ffb333333333334ULL, 0x3e05f0db6e89671dULL, },
	{ 0x3ffcccccccccccccULL, 0x3dfc4218c9487b6fULL, },
	{ 0x3ffe666666666664ULL, 0x3df2041abc05298eULL, },
	{ 0x4000000000000000ULL, 0x3de6bcfd33714bacULL, },
	{ 0x4000ccccccccccccULL, 0x3ddc662899c04e5bULL, },
	{ 0x4001999999999999ULL, 0x3dd18ba30b000ce4ULL, },
	{ 0x4002666666666666ULL, 0x3dc571797761efccULL, },
	{ 0x4003333333333333ULL, 0x3db9ea178a472d5bULL, },
	{ 0x4004000000000000ULL, 0x3daef5ce36b0d69eULL, },
	{ 0x4004ccccccccccccULL, 0x3da2473037c3ead3ULL, },
	{ 0x4005999999999999ULL, 0x3d9552e30c613ab8ULL, },
	{ 0x4006666666666666ULL, 0x3d88929bac5dd782ULL, },
	{ 0x4007333333333333ULL, 0x3d7bf654d1def1d2ULL, },
	{ 0x4008000000000000ULL, 0x3d6f697335c3acefULL, },
	{ 0x4008ccccccccccccULL, 0x3d61699721c9e7e2ULL, },
	{ 0x4009999999999999ULL, 0x3d530bb02a1edd40ULL, },
	{ 0x400a666666666666ULL, 0x3d448bdfb4cad0faULL, },
	{ 0x400b333333333333ULL, 0x3d35daba01b16e67ULL, },
	{ 0x400c000000000000ULL, 0x3d26e97b9c26369eULL, },
	{ 0x400cccccccccccccULL, 0x3d17ab0aaa1790f5ULL, },
	{ 0x400d999999999999ULL, 0x3d0814f458021a8fULL, },
	{ 0x400e666666666666ULL, 0x3cf8204d8c281189ULL, },
	{ 0x400f333333333333ULL, 0x3ce7ca5e3098bddbULL, },
	{ 0x4010000000000000ULL, 0x3cd71501c444a441ULL, },
	{ 0x4010666666666666ULL, 0x3cc606ae6e3a9f13ULL, },
	{ 0x4010cccccccccccdULL, 0x3cb4aa1ce9866e00ULL, },
	{ 0x4011333333333333ULL, 0x3ca30d963301e1a2ULL, },
	{ 0x401199999999999aULL, 0x3c9141f678475001ULL, },
	{ 0x4012000000000000ULL, 0x3c7eb2fb9592605dULL, },
	{ 0x4012666666666666ULL, 0x3c6acd1a3c648cc2ULL, },
	{ 0x4012cccccccccccdULL, 0x3c56f4e03bdddbb4ULL, },
	{ 0x4013333333333333ULL, 0x3c4348a41de64667ULL, },
	{ 0x401399999999999aULL, 0x3c2fc1d67c25f696ULL, },
	{ 0x4014000000000000ULL, 0x3c199ef8f5749cdbULL, },
	{ 0x4014666666666666ULL, 0x3c043e3b99b9c989ULL, },
	{ 0x4014cccccccccccdULL, 0x3bef4fbf2d0ffcb7ULL, },
	{ 0x4015333333333333ULL, 0x3bd7b12408d1821dULL, },
	{ 0x401599999999999aULL, 0x3bc1879fa38fe665ULL, },
	{ 0x4016000000000000ULL, 0x3ba95a711f8d30b6ULL, },
	{ 0x4016666666666666ULL, 0x3b91e8d35829dbcbULL, },
	{ 0x4016cccccccccccdULL, 0x3b78b3e6a8f25e2eULL, },
	{ 0x4017333333333333ULL, 0x3b609f93ccbe33ccULL, },
	{ 0x401799999999999aULL, 0x3b45d1687420ae0dULL, },
	{ 0x4018000000000000ULL, 0x3b2be8cdfb9a4e37ULL, },
};

namespace ns3 {

double sensitivity_ber(unsigned int index)
{
    double (*sensitivity_lut)[2] = (double (*)[2])sensitivity_matrix;
    return sensitivity_lut[index][1];
}

}
