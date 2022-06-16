def load_config(s: str):
    import toml
    with open(s, mode="r") as f:
        cfg_src = f.read()
    return toml.loads(cfg_src)