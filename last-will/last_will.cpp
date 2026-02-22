// Secret knowledge of the Zhang family:
namespace zhang {
int bank_number_part(int secret_modifier) {
    int zhang_part{8'541};
    return (zhang_part * secret_modifier) % 10000;
}
namespace red {
int code_fragment() { return 512; }
}  // namespace red
namespace blue {
int code_fragment() { return 677; }
}  // namespace blue
}  // namespace zhang

// Secret knowledge of the Khan family:
namespace khan {
int bank_number_part(int secret_modifier) {
    int khan_part{4'142};
    return (khan_part * secret_modifier) % 10000;
}
namespace red {
int code_fragment() { return 148; }
}  // namespace red
namespace blue {
int code_fragment() { return 875; }
}  // namespace blue
}  // namespace khan

// Secret knowledge of the Garcia family:
namespace garcia {
int bank_number_part(int secret_modifier) {
    int garcia_part{4'023};
    return (garcia_part * secret_modifier) % 10000;
}
namespace red {
int code_fragment() { return 118; }
}  // namespace red
namespace blue {
int code_fragment() { return 923; }
}  // namespace blue
}  // namespace garcia

namespace estate_executor {int assemble_account_number (int secret_modifier) {
    return (
        zhang::bank_number_part(secret_modifier) +
        khan::bank_number_part(secret_modifier) +
        garcia::bank_number_part(secret_modifier)
        );
}
int assemble_code(){
    namespace zb = zhang::blue;
    namespace zr = zhang::red;
    namespace kb = khan::blue;
    namespace kr = khan::red;
    namespace gb = garcia::blue;
    namespace gr = garcia::red;

    int total_blue = 0;
    int total_red = 0;

    total_blue = zb::code_fragment() + kb::code_fragment() + gb::code_fragment();
    total_red = zr::code_fragment() + kr::code_fragment() + gr::code_fragment();

    return total_blue * total_red;
}
}
