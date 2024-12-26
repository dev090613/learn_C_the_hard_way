import subprocess
import sys

def test_command_line_limits(num_args):

    try:
        args = ["./ex13"] + [f"arg{i}" for i in range(num_args)]

        result = subprocess.run(
                args,
                capture_output = True,
                text = True,
                timeout = 5,
                )
        print(f"Success: arg_cnt: {num_args} completed.")
        return True
    
    except subprocess.TimeoutExpired:
        print(f"Timeout at arg_cnt: {num_args}")
        return False

    except subprocess.CalledProcessError as e:
        print(f"Error Occured at arg_cnt: {num_args}")
        print(f"error code: {e.returncode}")
        print(f"print error: {e.stderr}")
        return False

    except Exception as e:
        print(f"Exception: at arg_cnt: {num_args}")
        print(f"{e}")
        return False


def helper() -> int:
    """
    Use Binary search
    """
    # 1000000 is estimated maximum count
    l, r = 1, 1000000
    last_success = 1
    
    while l <= r:
        m = (l + r) // 2
        print("test on-going.")
        print(f"Is max_args {m}?")
        
        if test_command_line_limits(m):
            last_success = m
            l = m + 1
        else:
            r = m - 1

    return last_success

def main():

    print("Program run")
    max_args = helper()
    print(f"\nAvailable max_args: {max_args}")

if __name__ == "__main__":

    main()
