import torch
import onnx
import onnxruntime

# Load the saved Random Forest model (assuming it's a PyTorch model)
model = torch.load('pytorch_model.pth')

# Convert the model to ONNX format
input_sample = torch.randn(1, 4)  # Provide an example input
onnx_model_path = 'RandomForestModel.onnx'
torch.onnx.export(model, input_sample, onnx_model_path, export_params=True, opset_version=10)
